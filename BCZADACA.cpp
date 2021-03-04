#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int gcd(int a,int b)
{
    while (a>0)
    {
        if (a<b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int scs(int a)
{
    int dem=0;
    while(a>0)
    {
        dem++;
        a/=10;
    }
    return dem;
}
int main()
{
    int n,m,a[1001]={},b[1001]={};
    bool dd=0;
    int mod=1e9;
    long long res=1;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        int tmp=gcd(a[i],b[j]);
        a[i]/=tmp;
        b[j]/=tmp;
        res=res*tmp;
        if (res>1e9)
        {
            dd=1;
            res=res%mod;
        }
    }
    if (dd)
    {
        for(int i=1;i<=(9-scs(res));i++) cout<<0;
        cout<<res;
    }
    else cout<<res;
	return 0;
}
