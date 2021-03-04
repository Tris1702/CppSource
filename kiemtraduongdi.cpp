#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> dd;

void dfs(int u,int dem)
{
    FORT(i,0,x[u].size())
    {
        int v=x[u][i];
        if (dd[v]==0)
        {
            dd[v]=dem;
            dfs(v,dem);
        }
    }
}
void Reset(int V)
{
    x.clear();
    dd.clear();
    x.resize(V+1);
    dd.resize(V+1,0);
}
void solve()
{
    int E,V;
    cin>>V>>E;
    Reset(V);
    FORT(i,0,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int dem=1;
    FORT(i,1,V+1)
        if (dd[i]==0)
        {
            dd[i]=dem;
            dfs(i,dem);
            dem++;
        }
    int Q;
    cin>>Q;
    FORT(q,0,Q)
    {
        int u,v;
        cin>>u>>v;
        if (dd[u]==dd[v]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}