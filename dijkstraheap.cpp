#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<pair<int,int> > > x;
vector<bool> dd;
vector<int> d;

int V,E,s;
const int oo=1e9;
struct cmp
{
    bool operator() (pair<int,int> a,pair<int,int> b)
    {
        return a.S>b.S;
    }
};
priority_queue<pair<int,int>,vector<pair<int,int> >, cmp > heap;
void dij()
{
    heap.push(mp(s,0));
    d[s]=0;
    while (heap.size())
    {
        int u=heap.top().F,w=heap.top().S;
        heap.pop();
        dd[u]=1;
        FORT(i,0,x[u].size())
        {
            int v=x[u][i].F;
            if (dd[v]==0)
            {
                int tmp=w+x[u][i].S;
                d[v]=min(tmp,d[v]);
                heap.push(mp(v,d[v]));
            }
        }
    }
}
void Reset()
{
    x.clear();
    dd.clear();
    d.clear();
    while (heap.size()) heap.pop();
    d.resize(V+1,oo);
    dd.resize(V+1,0);
    x.resize(V+1);
}
void solve()
{
    cin>>V>>E>>s;
    Reset();
    FORT(i,0,E)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x[a].push_back(mp(b,c));
        x[b].push_back(mp(a,c));
    }
    dij();
    FORT(i,1,V+1) cout<<d[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}