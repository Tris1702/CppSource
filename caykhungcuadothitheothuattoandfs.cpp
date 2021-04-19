#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int V, E, st;
vector<vector<int> > x;
// vector<int> trace;
vector<pair<int, int > > res;
vector<bool> dd;
bool check = 0;
void in()
{
    for(pair<int, int> e: res)
    {
        cout << e.F << ' ' << e.S << endl;
    }
}
void dfs(int u)
{
    dd[u] =1;
    for(int v: x[u])
        if (!dd[v])
        {
            res.push_back(mp(u,v));
            dfs(v);
        }
}
void init()
{
    x.clear();
    // trace.clear();
    res.clear();
    dd.clear();

    x.resize(V+1);
    // trace.resize(V+1,-1);
    dd.resize(V+1,0);
    // trace[st] = -1;
    check = 1;
}
void solve()
{
    cin >> V >> E >> st; 
    init();
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    dfs(st);
    for(int i = 1; i <= V; i++)
    {
        if(!dd[i]) check = 0;
    }
    if (!check) cout << -1<<endl;
    else in();
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}