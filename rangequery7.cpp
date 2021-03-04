#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n,x,res=1e9;
    cin>>n>>x;
    vector<int> a(n);
    int l=0,r=0,sum=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if (sum<=x)
        {
            sum+=a[i];
            r=i;
        }
        while (sum>x&&l<=r)
        {
            res=min(res,r-l+1);
            sum-=a[l];
            l++;
        }
    }
    if (res==1e9) res=-1;
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}