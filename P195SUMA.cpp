#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;
map<int,int> m;
vector<int> x;
int main()
{
    int n,k,luu=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (m[so]==0) x.push_back(so);
        m[so]++;
    }
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
    {
        if (m[x[i]]+luu==k)
        {
            cout<<x[i];
            return 0;
        }
        luu+=m[x[i]];
    }
    cout<<-1;
	return 0;
}
