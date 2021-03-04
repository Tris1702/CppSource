#include <bits/stdc++.h>

using namespace std;
long long dd[200005]={};
long long dem=1;
vector<long long> a;
int m;
int mod=1e9+7;
long long poww(long long a,long long b)
{
    long long res=1,tmp=a;
    for(long long i=b;i;i>>=1)
    {
        if (i&1) res=(res*tmp)%mod;
        tmp=(tmp*tmp)%mod;
    }
    return res;
}
bool ktcp()
{
    for(int i=0;i<a.size();i++)
        if (dd[a[i]]%2!=0) return 0;
    return 1;
}
int main()
{
    long long thu=1;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        long long so;
        cin>>so;
        if (dd[so]==0) a.push_back(so);
        dd[so]++;
        thu=(thu*so)%mod;
    }
    bool kt=ktcp();
    bool k=0;
    if (kt)
    {
        long long them=1;
        for(int i=0;i<a.size();i++) them=(them*poww(a[i],(dd[a[i]]+1)/2))%mod;
        if (a.size()==1) thu=poww(thu,dd[a[0]]/2);
        else for(int i=0;i<a.size();i++) thu=poww(thu,(dd[a[i]]/2+1));
        thu=(thu*them)%mod;
    }
    else
        for(int i=0;i<a.size();i++)
        {
            if (dd[a[i]]%2!=0&&k==0)
            {
                thu=poww(thu,(dd[a[i]]+1)/2);
                k=1;
            }
            else thu=poww(thu,(dd[a[i]]+1));
        }
    cout<<thu;
    return 0;
}
