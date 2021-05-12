#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
int res = 0, n, s;
int x[100][100]={}, dd[100]={};
vector<pair<int,int> > Tree;
void Prim()
{
    vector<int> Vh, V;
    Vh.push_back(s);
    dd[s] = 1;
    for(int i = 1; i <= n; i++)
        if (i != s) V.push_back(i);
    while (Vh.size() < n)
    {
        int u, v, minn = 1e9;
        for(int utmp: Vh)
            for(int vtmp: V)
                if (vtmp > utmp && dd[vtmp] == 0 && ((x[utmp][vtmp] < minn) || (x[utmp][vtmp] == minn && utmp < u)))
                {
                    minn = x[utmp][vtmp];
                    u = utmp;
                    v = vtmp;
                }
        res += minn;
        Vh.push_back(v);
        Tree.push_back(mp(u, v));
        dd[v] = 1;
    }
}
void solve()
{
    cin >> n >> s;
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++) 
        {
            int so;
            cin >> so;
            if (so == 0) x[i][j] = 1e9;
            else x[i][j] = so;
        }
    Prim();
    cout <<"dH = "<< res << endl;
    for(pair<int,int> i: Tree) cout <<i.first <<' '<< i.second<< endl;
}
int main()
{
    solve();
    return 0;
}
