#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
int V;
int bfs(int s, int t)
{
    dd.clear();
    dd.resize(V+1,0);
    queue<pair<int,int> > q;
    q.push(mp(s,0));
    while (!q.empty())
    {
        int u=q.front().F;
		int way = q.front().S;
        q.pop();
        if (u == t)
		{
			return way;
		}
        FORT(i,0,x[u].size())
        {
            int v=x[u][i];
            if (dd[v]==0)
            {
                q.push(mp(v, way+1));
                dd[v]=1;
            }
        }
    }
}
void solve()
{
    int E;
    cin>>V;
	E = V;
    x.clear();
    x.resize(V+1);
    FORT(i,1,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int q;
	cin >> q;
	while (q--)
	{
		int u, v;
		cin >> u >> v;
		cout << bfs(u, v) << endl;
	}
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}