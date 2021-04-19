#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n,k, sum, res;
bool dd[21]={};
vector<int> s;
void sinh(int spt,int k,int n, int sumtmp)
{
    if (spt>k)
    {
        if (sumtmp == sum)
		{
			res++;
		}
        return;
    }
    for(int i=s[spt-1]+1;i<=n;i++)
        if (!dd[i])
        {
            dd[i]=1;
            s.push_back(i);
            sinh(spt+1, k, n, sumtmp + i);
            s.pop_back();
            dd[i]=0;
        }
}
int main()
{
    while(1)
    {
        s.resize(0);
		res = 0;
        cin>>n>>k>>sum;
		if(n == 0 && k == 0 && sum == 0) break;
        s.push_back(0);
        sinh(1,k,n,0);
        cout<<res<<endl;
    }
    return 0;
}
