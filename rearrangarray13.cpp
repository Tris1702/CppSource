#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    int x=a[0]-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[j]>b[i]) break;
            if(a[j]==b[i]) 
            {
                cout<<a[j]<<' ';
                a[j]=x;
            }
        }
    }
    for(int i=0;i<n;i++) 
        if (a[i]!=x) cout<<a[i]<<' ';
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}