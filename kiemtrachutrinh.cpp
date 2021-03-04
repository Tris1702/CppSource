#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> trace,dd;
bool check=0;
void bfs(int s)
{
    queue<pair<int,int> > q;
    q.push(mp(s,0));
    while (!q.empty())
    {
        int u=q.front().F,pre=q.front().S;
        q.pop();
        FORT(i,0,x[u].size())
        {
            int v=x[u][i];
            if (dd[v]&&v!=pre)
            {
                check=1;
                return;
            }
            if (dd[v]==0)
            {
                dd[v]=1;
                q.push(mp(v,u));
            }
            
        }
    }
}
void Reset(int V)
{
    x.clear();
    dd.clear();
    trace.clear();
    trace.resize(V+1,-1);
    x.resize(V+1);
    dd.resize(V+1,0);
    check=0;
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
    FORT(i,1,V+1)
        if (dd[i]==0)
        {
            dd[i]=1;
            bfs(i);
        }
    (check)? (cout<<"YES"):(cout<<"NO");
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}