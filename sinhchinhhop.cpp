#include<bits/stdc++.h>

using namespace std;
int n,k;
bool dd[11]={};
vector<int> s;
void sinh(int spt,int k,int n)
{
    if (spt>k)
    {
        for(int i=0;i<s.size();i++)
            cout<<s[i]<<' ';
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
        if (!dd[i])
        {
            dd[i]=1;
            s.push_back(i);
            sinh(spt+1,k,n);
            s.pop_back();
            dd[i]=0;
        }
}
int main()
{
    cin>>n>>k;
    sinh(1,k,n);
	return 0;
}
