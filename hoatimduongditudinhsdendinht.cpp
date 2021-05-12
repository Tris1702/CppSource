#include<bits/stdc++.h>

using namespace std;
int V, s, t;
int x[100][100] = {};
vector<bool> dd(100,0);
vector<int> pre(100, -1);
void trace(int u)
{
    if (u == -1) return;
    cout << u <<' ';
    trace(pre[u]);
}
void dfs(int s, int t)
{
    dd[s] = 1;
    if (s == t) return;
    for(int i =  1; i <= V; i++)
        if (dd[i] == 0 && x[s][i] == 1)
        {
            pre[i] = s;
            dfs(i, t);
        }
}
void bfs(int s, int t)
{
    queue<int> q;
    dd[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v = 1; v <= V; v++)
            if (dd[v] == 0 && x[u][v] == 1)
            {
                pre[v] = u;
                dd[v] = 1;
                q.push(v);
            }
    }
}
int main()
{
    cin >> V >> s >> t;
    for(int i = 1; i <= V; i++)
        for(int j = 1; j <= V; j++) 
            cin >> x[i][j];
    dfs(s, t);
    if (dd[t] == 1)
    {
        cout << "DFS path: ";
        trace(t);
        dd.clear();
        dd.resize(100, 0);
        pre.clear();
        pre.resize(100,-1);
        bfs(s, t);
        cout << endl<< "BFS path: ";
        trace(t);
    }
    else
    {
        cout <<"no path";
    }
    return 0;
}
