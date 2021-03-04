#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,minn=1e9;
    vector<int> a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    for(int i=1;i<a.size();i++)
        minn=min(minn,a[i]-a[i-1]);
    cout<<minn;
    return 0;
}
