#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n;
bool dd[100]={};
vector<int> f;
void sinh(int vt,int so)
{
    if (vt>n)
    {
        f.push_back(so);
        return;
    }
    FORT(i,1,n)
        if (dd[i]==0)
        {
            dd[i]=1;
            sinh(vt+1,so*10+i);
            dd[i]=0;
        }
}
int main()
{
    int k;
    cin>>n>>k;
    sinh(1,0);
    k-=1;
    k%=f.size();
    cout<<f[k];
	return 0;
}
