#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> a;
    vector<long long> b;
    for(int i=1;i<=n;i++)
    {
        long long x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"rated";
            return 0;
        }
    }
    for(int i=1;i<n;i++)
    {
        if (a[i]>a[i-1])
        {
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
	return 0;
}
