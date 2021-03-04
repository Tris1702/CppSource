#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    long long res=0;
    cin>>n;
    vector<long long> a(n),f(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        f[i]=a[i];
        if (i==2) f[i]+=a[i-2];
        if (i>2) f[i]+=max(f[i-2],f[i-3]);
    }
    for(int i=0;i<n;i++) res=max(res,f[i]);
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}