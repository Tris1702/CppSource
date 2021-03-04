#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

void solve()
{
    int n,maxx=0,minn=1e9,res=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }
    int d=maxx-minn;
    for(int k=1;k<=sqrt(d);k++)
    {
        int j=d/k,dem=0;
        for(int i=0;i<n;i++)
            if (a[i]%k==a[0]%k) dem++;
        if (dem==n) res++;
        if (j==k) continue;
        dem=0;
        for(int i=0;i<n;i++)
            if (a[i]%j==a[0]%j) dem++;
        if (dem==n) res++;
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}