#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    vector<int> a;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) a.push_back(i*j);
    sort(a.begin(),a.end());
    cout<<a[k-1];
    return 0;
}
