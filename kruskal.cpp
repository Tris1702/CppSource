#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int V,E;
priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > x;
vector<int> father;
int Find_root(int u)
{
    while (father[u]>0) u=father[u];
    return u;
}
int child (int u)
{
    return -father[u];
}
void Union(int u,int v)
{
    int rootu=Find_root(u);
    int rootv=Find_root(v);
    if (child(rootu)>child(rootv))
    {
        father[rootu]-=father[rootv];
        father[rootv]=rootu;
    }
    else
    {
        father[rootv]-=father[rootu];
        father[rootu]=rootv;
    }
}
void Reset()
{
    father.clear();
    father.resize(V+1,-1);
    while (x.size()) x.pop();
}
void solve()
{
    cin>>V>>E;
    Reset();
    FORT(i,0,E)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x.push(mp(c,mp(a,b)));
    }
    int res=0;
    while (x.size())
    {
        int u=x.top().S.F;
        int v=x.top().S.S;
        if (Find_root(u)!=Find_root(v))
        {
            res+=x.top().F;
            Union(u,v);
        }
        x.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}