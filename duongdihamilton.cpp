#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<int> x[100];
int V, E;
bool ok;
vector<bool> Free;
void dfs(int s, int sl)
{
    for(int v: x[s])
    {
        if (Free[v] == 0) continue;
        if (sl == V)
        {
            ok = 1;
            return;
        }
        Free[v] = 0;
        dfs(v, sl+1);
        Free[v] =1 ;
    }
}

void init()
{
    for(int i = 0; i < 100; i++) 
    {
        x[i].clear();
        x[i].resize(0);
    }
    ok = 0;
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
    for(int i = 1; i <= V; i++)
    {
        Free.clear();
        Free.resize(100, 1);
        Free[i] = 1;
        dfs(i, 1);
        if (ok) 
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}