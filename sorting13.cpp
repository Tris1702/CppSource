#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> a(n+m);
	FORT(i,0,n+m) cin>>a[i];
	sort(a.begin(),a.end());
	FORT(i,0,m+n) cout<<a[i]<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}