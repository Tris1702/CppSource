#include <bits/stdc++.h>

using namespace std;
int n,k;
long long res=0;
vector<int> a;
pair<vector<int>::iterator, vector<int>::iterator> it;
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int so;
        cin>>so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int tmp=k-a[i]-a[j];
            it=equal_range(a.begin(),a.end(),tmp);
            if (tmp>a[j]) res+=it.second-it.first;
            if (tmp==a[j]) res+=(it.second-a.begin())-j-1;
        }
    }
    cout<<res;
    return 0;
}
