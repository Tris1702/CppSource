#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n,k,l=0,r=0,maxx=-1e9;
    cin>>n>>k;
    vector<int> a(n),f(n);
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if (i>0) f[i]=f[i-1]+a[i];
        else f[i]=a[i];
    }
    for(int i=0;i<n-k+1;i++)
    {
        int sum;
        if (i>0) sum=f[i+k-1]-f[i-1];
        else sum=f[i+k-1];
        if (sum>maxx)
        {
            maxx=sum;
            l=i;
            r=i+k;
        }
    }
    for(int i=l;i<r;i++) cout<<a[i]<<' ';
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}