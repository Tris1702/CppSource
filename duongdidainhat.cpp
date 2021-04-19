#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<vector<int> > x, dd;
int n, m, res = 0;

void Try(int u, int sum)
{
	res = max (res, sum);
	for(int v = 0; v < n; v++)
		if (x[u][v] == 1)
		{
			x[u][v] = x[v][u] = 0;
			Try(v, sum + 1);
			x[u][v] = x[v][u] = 1;
		}
}

void init()
{
	x.clear();
	x.resize(n+5, vector<int> (n+5));
	dd.clear();
	dd.resize(n+5, vector<int> (n+5));
	res = 0;
}

void solve()
{
	cin >> n >> m;
	init();
	for(int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		x[a][b] = x[b][a] = 1;
	}
	for(int i = 1; i < n; i++)
		Try(i, 0);
	cout << res <<endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}