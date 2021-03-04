#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> a;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}
