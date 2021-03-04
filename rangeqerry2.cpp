#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l,r;
    cin>>l>>r;
    if (l==r)
    {
        cout<<"Yes"<<endl;
        return;
    }
    int i=l;
    while (i<r&&a[i]<a[i+1]) i++;
    while (i<r&&a[i]>a[i+1]) i++;
    if (i<r) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}