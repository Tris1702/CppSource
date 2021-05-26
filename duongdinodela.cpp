#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
map<int,int> trc, child;
set<int> s;
int n;
void init()
{
	trc.clear();
	child.clear();
	s.clear();
	trc[1] = -1;
}
bool isLeaf(int u)
{
	return (child[u] == 0);
}
void findWay(int u)
{
	if (u == -1) return;
	findWay(trc[u]);
	cout << u << ' '; 
}
void solve()
{
	cin >> n;
	init();
	for(int i = 1; i < n; i++)
	{
		int u, v;
		cin >> u >> v;
		trc[v] = u;
		s.insert(v);
		child[u]++;
	}
	for(set<int> :: iterator it = s.begin(); it != s.end(); it++)
	{
		int u = *it;
		if (isLeaf(u)) 
		{
			findWay(u);
			cout << endl;
		}
	}
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}