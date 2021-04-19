#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
// set<string> res;
vector<string> res;
set<string> dic;
vector<vector<bool> > dd;
vector<vector<string> > x;
int dic_n, n, m;
const pair<int,int> b[8] = {mp(-1,-1), mp(-1,0), mp(-1,1), mp(0,-1), mp(0, 1), mp(1, -1), mp(1, 0), mp(1, 1)};
void dfs(int i, int j, string s)
{
	if (dic.count(s) != 0) res.push_back(s);
	for(int k = 0; k <8; k++)
	{
		int u = i+b[k].F;
		int v = j+b[k].S;
		if (u >=0 && u < n && v >=0 && v <m &&dd[u][v] == 0)
		{
			dd[u][v] = 1;
			dfs(u,v, s+x[u][v]);
			dd[u][v] = 0;
		}
	}
}

void init()
{
	dic.clear();
	res.clear();
	x.clear();
	x.resize(n, vector<string> (m));
}

void solve()
{
	cin >> dic_n >> n >> m;
	vector<string> dictmp;
	init();
	for(int i = 0; i < dic_n; i++) 
	{
		string s;
		cin >> s;
		dic.insert(s);
		dictmp.push_back(s);
	}
	for(int i =0; i<n; i++)
		for(int j = 0; j<m; j++) cin >> x[i][j];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			dd.clear();
			dd.resize(n, vector<bool> (m,0));
			dd[i][j] = 1;
			dfs(i,j, ""+x[i][j]);
		}
	if (res.size() == 0) cout << -1;
	else
		for(string s : res ) cout << s << ' ';
	cout << endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}