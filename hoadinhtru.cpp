#include<bits/stdc++.h>

using namespace std;

int V, x[100][100]={};
bool dd[100]={};
void dfs(int u)
{
    dd[u] = 1;
    for(int v = 1; v <=V; v++)
        if (dd[v] == 0 && x[u][v] == 1) dfs(v);
}
void solve()
{
    cin >> V; 
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++) cin >> x[i][j];
    for(int i = 1; i <= V; i++)
    {
        bool check = 0;
        dd[i] = 1;
        if (i == 1) dfs(2);
        else dfs(1);
        for(int i = 1; i <=V; i++)
        {
            if (dd[i] == 0) check = 1;
            dd[i] = 0;
        }
        if (check) cout << i << ' ';
    }
}

int main()
{
    solve();
    return 0;
}
