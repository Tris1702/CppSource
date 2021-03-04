#include<bits/stdc++.h>
using namespace std;

long long mod(string a, long long b)
{
    long long tmp=0;
    for(int i=0;i<a.length();i++)
    {
        tmp=tmp*10+(a[i]-'0');
        if (tmp>b) tmp%=b;
    }
    return tmp;
}
long long poww(long long a, long long b,long long m)
{
    long long res=1;
    for(int i=b;i;i>>=1)
    {
        if (i&1) res=(res*a)%m;
        a=(a*a)%m;
    }
    return res;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long b,m;
        string a;
        cin>>a>>b>>m;
        long long tmp=mod(a,m);
        long long res=poww(tmp,b,m);
        cout<<res<<endl;
    }
    return 0;
}
