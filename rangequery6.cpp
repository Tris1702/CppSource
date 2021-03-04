#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n,res=0;
    cin>>n;
    vector<int> a(n),f(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        f[i]=a[i];
        for(int j=0;j<i;j++)
            if (a[j]<a[i]) 
            {
                f[i]=max(f[i],f[j]+a[i]);
            }
        res=max(res,f[i]);
    }
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}