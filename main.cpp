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
int res;
void init()
{
    a.clear();
    a.resize(n+1, vector<int> (m+1));
    dd.clear();
    dd.resize(n+1, vector<bool> (m+1, 0));
    res = 1e9;
}
void dfs(pair<int,int> u, int pre, int turn)
{
    if (u == fn)
    {
        res = min(res, turn);
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        pair<int,int> v = mp(u.F+b[i].F, u.S+b[i].S);
        if (v.F >0 && v.F <=n && v.S >0 && v.S <= m && dd[v.F][v.S] == 0 && a[v.F][v.S])
        {
            dd[v.F][v.S] = 1;
            if (pre != -1 && pre != i) dfs(v, i, turn+1);
            else dfs(v, i, turn);
            dd[v.F][v.S] = 0;
        }
    }
}
void solve()
{
    cin >> n;
    m = n;
    init();
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) 
        {
            char c;
            cin >> c;
            if (c == 'X') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    cin >> st.F >> st.S >> fn.F >> fn.S;
    st.F++; st.S++; fn.F++;fn.S++;
    dd[st.F][st.S] = 1;
    dfs(st, -1, 0);
    cout << res+1 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}