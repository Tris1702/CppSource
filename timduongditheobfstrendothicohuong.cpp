#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> trace;
vector<bool> dd;
bool check;
void in(int u)
{
    if (trace[u]==-1)
    {
        cout<<u<<' ';
        return;
    }
    in(trace[u]);
    cout<<u<<' ';
}
void bfs(int s,int kt)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        if (u==kt) 
        {
            check=1;
            in(u);
            return;
        }
        FORT(i,0,x[u].size())
        {
            int v=x[u][i];
            if (dd[v]==0)
            {
                trace[v]=u;
                q.push(v);
                dd[v]=1;
            }
        }
    }
}
void solve()
{
    int E,V,u,v;
    cin>>V>>E>>u>>v;
    check=0;
    x.clear();
    dd.clear();
    trace.clear();
    trace.resize(V+1,-1);
    x.resize(V+1);
    dd.resize(V+1,0);
    FORT(i,0,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
    }
    dd[u]=1;
    bfs(u,v);
    if (check==0) cout<<-1;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}