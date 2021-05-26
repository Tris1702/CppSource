#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<vector<int> > x;
int n, res;

void init()
{
    x.clear();
    x.resize(n+1);
    res = 0;
}

void dfs(int u, int deep)
{
    res = max(res, deep);
    for(int v: x[u])
        dfs(v, deep+1);
}

void solve()
{
    cin >> n;
    init();
    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        x[u].push_back(v);
    }
    dfs(1, 0);
    cout << res << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}