#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
using namespace std;

int n, s;
vector<vector<int> > x;
vector<bool> dd;
bool ok;
vector<pair<int,int> > Tree;
void Print(bool typ)
{
    if (typ) cout << "DFS tree\n";
    else cout << "BFS tree\n";
    for(pair<int,int> branch: Tree)
        cout << branch.F <<' ' << branch.S <<endl;
}

void find_by_DFS(int u)
{
    if (ok) return;
    if (Tree.size() == n-1)
    {
        Print(1);
        ok = 1;
        return;
    }
    for(int v = 1; v <= n; v++)
        if (x[u][v] && dd[v] == 0)
        {
            dd[v] = 1;
            Tree.push_back(mp(u,v));
            find_by_DFS(v);
        }
}
void find_by_BFS(int s)
{
    queue<pair<int,int> > q;
    q.push(mp(s, 0));
    while (!q.empty())
    {
        int u = q.front().F;
        int pre = q.front().S;
        if (pre != 0 && dd[u] == 0)
        {
            Tree.push_back(mp(pre, u));
        }
        q.pop();
        if (Tree.size() == n-1)
        {
            Print(0);
            return;
        }
        dd[u] = 1;
        for(int v = 1; v <=n; v++)
            if (x[u][v]  && dd[v] == 0)
            {
                q.push(mp(v, u));
            }
    }
}
void init()
{
    x.clear();
    x.resize(n+1, vector<int> (n+1));
    dd.clear();
    dd.resize(n+1, 0);
    Tree.clear();
    Tree.resize(0);
}
void solve()
{
    cin >> n >> s;
    init();
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> x[i][j];
    dd[s] = 1;
    find_by_DFS(s);
    dd.clear();
    dd.resize(n+1, 0);
    Tree.clear();
    Tree.resize(0);
    find_by_BFS(s);
}
int main()
{
    solve();
    return 0;
}
