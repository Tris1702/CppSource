#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<long long> a(n1),b(n2),c(n3);
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    for(int i=0;i<n3;i++) cin>>c[i];
    int i=0,j=0,k=0;
    bool check=1;
    while (i<n1&&j<n2&&k<n3)
    {
        if (a[i]==b[j]&&b[j]==c[k]) 
        {
            cout<<a[i]<<' ';
            check=0;
            i++;j++;k++;
            continue;
        }
        if (a[i]<b[j]||a[i]<c[k]) 
        {
            i++;
            continue;
        }
        if (b[j]<c[k]||b[j]<a[i]) 
        {
            j++;
            continue;
        }
        if (c[k]<a[i]||c[k]<b[j]) 
        {
            k++;
            continue;
        }
    }
    if (check) cout<<"NO";
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}