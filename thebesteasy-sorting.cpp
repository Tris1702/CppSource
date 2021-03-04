#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> f,a(n);
    FORT(i,0,n-1) cin>>a[i];
    sort(a.begin(),a.end());
    f.push_back(a[0]);
    FORT(i,1,n-1)
        if (a[i]!=a[i-1]) f.push_back(a[i]);
    sort(f.begin(),f.end());
    if (k>f.size()) cout<<-1;
    else cout<<f[k-1];
	return 0;
}
