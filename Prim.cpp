#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> d;
vector<bool> dd;
int V,E;
const int oo=1e9;
vector<vector<pair<int,int> > > x;
void Prim()
{
    d[1]=0;
    FORT(i,1,V+1)
    {
        int u,minn=oo;
        FORT(j,1,V+1)
            if (dd[j]==0&&d[j]<minn)
            {
                minn=d[j];
                u=j;
            }
        dd[u]=1;
        FORT(j,0,x[u].size())
        {
            int v=x[u][j].F,w=x[u][j].S;
            if (dd[v]==0)
                d[v]=min(d[v],w);
        }
    }
}
void Reset()
{
    x.clear();
    dd.clear();
    d.clear();
    dd.resize(V+1,0);
    x.resize(V+1);
    d.resize(V+1,oo);
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
        x[b].push_back(mp(a,c));
    }
    Prim();
    int res=0;
    FORT(i,1,V+1) res+=d[i];
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}