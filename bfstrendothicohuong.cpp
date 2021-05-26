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
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<' ';
        FORT(i,0,x[u].size())
        {
            int v=x[u][i];
            if (dd[v]==0)
            {
                q.push(v);
                dd[v]=1;
            }
        }
    }
}
void solve()
{
    int E,V,u,v;
    cin>>V>>E>>u;
    x.clear();
    dd.clear();
    x.resize(V+1);
    dd.resize(V+1,0);
    FORT(i,0,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
    }
    dd[u]=1;
    bfs(u);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}