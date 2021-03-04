#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long poww(long long tich, long long mu, int m)
{
    long long res=1;
    for(int i=mu;i;i>>=1)
    {
        if (i&1) res=(res*tich)%m;
        tich=(tich*tich)%m;
    }
    return res;
}
int ucln(int a,int b)
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
int main()
{
    int T;
    cin>>T;
    int mod=1e9+7;
    for(int t=1;t<=T;t++)
    {
        int n;
        int a[61]={};
        long long tich=1,g;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            tich=(tich*a[i])%mod;
        }
        g=a[1];
        for(int i=2;i<=n;i++) g=ucln(g,a[i]);
        cout<<poww(tich,g,mod)<<endl;
    }
	return 0;
}
