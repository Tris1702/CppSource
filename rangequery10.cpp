#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n,dem=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int d=0,c=n-1;
    while (d<c)
    {
        if (a[d]<a[c])
        {
            d++;
            a[d]+=a[d-1];
            a[d-1]=0;
            dem++;
            continue;
        }
        if (a[c]<a[d])
        {
            c--;
            a[c]+=a[c+1];
            a[c+1]=0;
            dem++;
            continue;
        }
        if (a[d]==a[c])
        {
            d++;
            c--;
        }
    }
    cout<<dem<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}