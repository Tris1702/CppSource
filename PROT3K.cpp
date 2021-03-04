#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    int i;
    for(i=1;i<n;i++)
        if (a[i]<a[i-1]) break;
    if (i==n) cout<<"YES";
    else cout<<"NO "<<i;
    return 0;
}
