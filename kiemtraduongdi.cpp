#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int V, E;
vector<vector<int> > x;
bool bfs(int st, int fn)
{
    queue<int> q;
    q.push(st);
    bool dd[V+1]={};
    dd[st] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u == fn) return 1;
        for(int v: x[u])
        {
            if (dd[v]) continue;
            q.push(v);
            dd[v] = 1;
        }
    }    
    return 0;
}
void init()
{
    x.clear();
    x.resize(V+1); 
}

void solve()
{
    cin >> V >> E;
    init();
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        x[u].push_back(v);
        x[v].push_back(u);
    }
    int Q;
    cin >> Q;
    for(int q = 0; q < Q; q++)
    {
        int u, v;
        cin >> u >> v;
        if (bfs(u,v)) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}