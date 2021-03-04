#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int d=0,c=(n+1)/2;
    while (c<n)
    {
        cout<<a[d]<<' '<<a[c]<<' ';
        d++;
        c++;
    }
    if (n%2) cout<<a[d];
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}