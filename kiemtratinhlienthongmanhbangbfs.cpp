#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int V, E;
bool check;
vector<vector<int> > x;

int bfs(int s)
{
	vector<bool> dd(V+1,0);
	queue<int> q;
	q.push(s);
	dd[s] = 1;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int v: x[u])
			if (dd[v] == 0)
			{
				dd[v] = 1;
				q.push(v);
			}
	}
	FORT(i, 1, V+1)
		if(dd[i] == 0) return 0;
	return 1;
}
void init()
{
	x.clear();
	x.resize(V+1);
	check = 1;
}
void solve()
{
	cin >> V >> E;
	init();
	FORT(i, 0, E)
	{
		int a, b;
		cin >> a >> b;
		x[a].push_back(b);
	}
	FORT(s, 1, V+1) 
	{
		if(!check) break;
		check = bfs(s);
	}
	(check)? (cout<<"YES"<<endl): (cout<<"NO"<<endl);
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}