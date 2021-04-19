#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int V,E,st,fn;
vector<bool> dd;
// vector<int> trace;
vector<vector<int> > x;
void init()
{
    dd.clear();
    // trace.clear();
    x.clear();

    dd.resize(V+5,0);
    x.resize(V+5);

}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    dd[u] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v: x[u])
        {
            if (dd[v] == 0) 
            {
                dd[v] = 1;
                q.push(v);
            }
        }
    }
}
void solve()
{
    int dem = 0;
    cin >> V >> E;
    init();
    for(int i = 0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    for(int i = 1; i <= V; i++)
        if (dd[i] == 0)
        {
            bfs(i);
            dem ++;
        }
    cout<<dem<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}