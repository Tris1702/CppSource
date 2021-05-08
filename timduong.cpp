#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
const pair<int,int> b[4] = {mp(-1, 0), mp(1, 0), mp(0, -1), mp(0, 1)};
pair<int,int> st, fn;
vector<vector<int> > a;
vector<vector<bool> > dd;
int n, m;
bool Yes;
void init()
{
    a.clear();
    a.resize(n+1, vector<int> (m+1));
    dd.clear();
    dd.resize(n+1, vector<bool> (m+1, 0));
    Yes = 0;
}
void dfs(pair<int,int> u, int pre, int turn)
{
    if (Yes) return;
    if (u == fn)
    {
        Yes = 1;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        pair<int,int> v = mp(u.F+b[i].F, u.S+b[i].S);
        if (v.F >0 && v.F <=n && v.S >0 && v.S <= m && dd[v.F][v.S] == 0 && a[v.F][v.S])
        {
            if (pre != -1 && pre != i && turn == 0) continue;
            dd[v.F][v.S] = 1;
            if (pre != -1 && pre != i) dfs(v, i, turn-1);
            else dfs(v, i, turn);
            dd[v.F][v.S] = 0;
        }
    }
}
void solve()
{
    cin >> n >> m;
    init();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) 
        {
            char c;
            cin >> c;
            if (c == '*') a[i][j] = 0;
            else a[i][j] = 1;
            if (c == 'S') st = mp(i,j);
            if (c == 'T') fn = mp(i,j);
        }
    }
    dd[st.F][st.S] = 1;
    dfs(st, -1, 2);
    if (Yes) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}
