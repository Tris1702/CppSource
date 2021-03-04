#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    vector<int> f;
    bool dd[100005]={};
    int n,k;
    cin>>n>>k;
    FORT(i,1,n)
    {
        int so;
        cin>>so;
        if (dd[so]==0) f.push_back(so);
        dd[so]=1;
    }
    sort(f.begin(),f.end());
    if (k>f.size()) cout<<-1;
    else cout<<f[k-1];
	return 0;
}
