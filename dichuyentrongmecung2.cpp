#include<bits/stdc++.h>
#define mp make_pair
#define F first
#define S second
using namespace std;
int x[10][10]={};
bool dd[10][10]={};
vector<string> res;
pair<int, int> b[4]= {mp(1,0), mp(0,-1), mp(0,1), mp(-1, 0)};
int n, m;
void init()
{
    res.clear();
}
void dfs(int ii, int jj, string path)
{
    if (x[0][0] == 0) return;
    if (ii == n-1 && jj == m-1)
    {
        res.push_back(path);
        return;
    }
    for(int i=0; i<4; i++)
    {
        int u=ii+b[i].F, v=jj+b[i].S;
        if (u < 0 || u >= n || v < 0 || v >= m) continue;
        if (x[u][v] == 0) continue;
        if (dd[u][v] == 0)
        {
            dd[u][v] = 1;
            if (i==0) 
                dfs(u, v, path+"D");
            else
                if(i==1) 
                    dfs(u, v, path+"L");
                else
                    if (i==2) 
                        dfs(u, v, path+"R");
                    else 
                        dfs(u, v, path+"U");
            dd[u][v] = 0;
        }
    }
}
void solve()
{
    cin >> n;
    m = n;
    init();
    for(int i=0; i < n; i++)
        for(int j=0; j < m; j++) 
        {
           cin >> x[i][j];
           dd[i][j] = 0;
        }
    dd[0][0] = 1;
    dfs(0,0, "");
    if (res.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    sort(res.begin(), res.end());
    for( string s: res) cout << s <<" ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}