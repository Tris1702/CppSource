#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int V, E, st,fn;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
bool check = 0;
void in(int u)
{
    if (u == -1) return;
    in(trace[u]);
    cout << u<<' ';
}
void dfs(int u, int fn)
{
    if (check) return;
    if (u == fn)
    {
        check = 1;
        in(u);
        return;
    }
    dd[u] = 1;
    for(int v: x[u])
        if (dd[v] == 0)
        {
            trace[v] = u;
            dfs(v, fn);
        }
}
void init()
{
    x.clear();
    trace.clear();
    dd.clear();

    x.resize(V+1);
    trace.resize(V+1,-1);
    dd.resize(V+1,0);
    trace[st] = -1;
    check = 0;
}
void solve()
{
    cin >> V >> E >> st >> fn; 
    init();
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    // for(int i = 1; i <= V; i++) sort(x[i].begin(),x[i].end());
    dfs(st,fn);
    if (!check) cout << -1;
    cout << endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}