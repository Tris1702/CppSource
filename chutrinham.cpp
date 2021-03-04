#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int V,E;
vector<vector<pair<int,int> > > x;
vector<int> d;
void bellman_ford()
{
    bool check;
    d[1]=0;
    FORT(loop,1,V+2)
    {
        check=0;
        FORT(u,1,V+1)
        {
            FORT(i,0,x[u].size())
            {
                int v=x[u][i].F;
                int w=x[u][i].S;
                if (d[v]>d[u]+w)
                {
                    check=1;
                    d[v]=d[u]+w;
                }
            }
        }
    }
    cout<<check;
}
void Reset()
{
    d.clear();
    x.clear();
    x.resize(V+1);
    d.resize(V+1,1e9);
}
void solve()
{
    cin>>V>>E;
    Reset();
    FORT(i,0,E)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x[a].push_back(mp(b,c));
    }
    bellman_ford();
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}