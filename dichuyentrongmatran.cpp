#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int res,n,m;
void dfs(int u, int v)
{
	if (u >= n || u <0 || v < 0 || v >= m) return;
	if (u == n-1 && v == m-1) 
	{
		res++;
		return;
	}
	dfs(u+1,v);
	dfs(u,v+1);
}
void solve()
{
	res = 0;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m ;j++) cin >>a[i][j];
	dfs(0,0);
	cout<<res<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}