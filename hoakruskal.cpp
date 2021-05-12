#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
using namespace std;
struct branch
{
    int w, u, v;
};
struct cmp
{
    bool operator() (branch a, branch b)
    {
        return (a.w > b.w) || (a.w == b.w && a.u > b.u) || (a.w == b.w && a.u == b.u && a.v > b.v);
    }
};
int n;
priority_queue<branch, vector<branch>, cmp > q;
vector<int> Root;
vector<pair<int,int> > Tree;
int Find_Root(int u)
{
    if (Root[u] == -1) return u;
    return Root[u];
}
void Union(int r1, int r2)
{
    Root[r2] = r1;
}
void solve()
{
    int res = 0;
    cin >> n;
    Root.resize(n+1);
    for(int i = 1; i <= n; i++)
    {
        Root[i] = i;
        for(int j = 1; j <=n; j++)
        {
            int x;
            cin >> x;
            if (j > i && x >0) q.push({x, i,j});
        }
    }
    Root[q.top().u] = -1;
    while (Tree.size() < n-1)
    {
        int w = q.top().w;
        int i = q.top().u;
        int j = q.top().v;
        q.pop();
        int r1 = Find_Root(i);
        int r2 = Find_Root(j);
        if (r1 != r2)
        {
            Union(r1, r2);
            res+=w;
            Tree.push_back(mp(i,j));
        }
        cout << "dh = " << res << endl;
        for(pair<int,int> b: Tree) cout << b.F <<' '<< b.S << endl;
    }
}
int main()
{
    solve();
    return 0;
}
