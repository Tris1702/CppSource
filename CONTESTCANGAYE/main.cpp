#include <bits/stdc++.h>

using namespace std;
struct sum
{
    int gt;
    int l;
    sum()
    {
        gt=l=0;
    }
};
int main()
{
    int n;
    cin>>n;
    int f[n+1]={},tong[n+1]={},luul[n+1]={},luur[n+1]={};
    int ressum=-1e9,resl=0,resr=0;
    sum minn[n+1]={};
    minn[0].gt=1e9;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        f[i]=so+f[i-1];
        minn[i]=minn[i-1];
        if (f[i]<minn[i].gt)
        {
            minn[i].gt=f[i];
            minn[i].l=i;
        }
    }
    tong[1]=f[1];
    luul[1]=1;
    luur[1]=1;
    for(int i=2;i<=n;i++)
    {
        tong[i]=f[i];
        luul[i]=1;
        luur[i]=i;
        if (f[i]-minn[i-1].gt>f[i])
        {
            luul[i]=minn[i-1].l+1;
            tong[i]=f[i]-minn[i-1].gt;
        }
    }
    for(int i=1;i<=n;i++)
        if (ressum<tong[i])
    {
        ressum=tong[i];
        resl=luul[i];
        resr=luur[i];
    }
    cout<<resl<<' '<<resr<<' '<<ressum;
    return 0;
}
