#include<bits/stdc++.h>
using namespace std;
int V;
bool dd[100] = {};
int x[100][100] = {};
void dfs(int u)
{
    dd[u] = 1;
    for(int v = 1; v <= V; v++)
        if (dd[v] == 0 && x[u][v] == 1) dfs(v);
}
int main()
{
    cin >> V;
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++)
            cin >> x[i][j];
    int dem = 0;
    for(int i = 1; i <= V; i++)
        if (dd[i] == 0)
        {
            dem++;
            dfs(i);
        }
    cout << dem;
    return 0;
}
