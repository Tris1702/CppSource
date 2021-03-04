#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const int oo=1e9;
int V,E;
vector<vector<int> > x;
vector<int> Num,Low,Pre;
vector<pair<int,int> > res;
void dfs(int u,int &no)
{
    FORT(i,0,x[u].size())
    {
        int v=x[u][i];
        if (v==Pre[u]) continue;
        if (Num[v]==0)
        {
            no++;
            Num[v]=no;
            Pre[v]=u;
            dfs(v,no);
            if (Num[u]<Low[v]) 
            {
                if (u<v) res.push_back(mp(u,v));
                else res.push_back(mp(v,u));
            }
            Low[u]=min(Low[v],Low[u]);
        }
        else Low[u]=min(Low[u],Num[v]);
    }
}
void Reset()
{
    x.clear();
    Num.clear();
    Low.clear();
    Pre.clear();
    x.resize(V+1);
    Pre.resize(V+1);
    Num.resize(V+1,0);
    Low.resize(V+1,oo);
    res.clear();
    res.resize(0);
}
void solve()
{
    cin>>V>>E;
    Reset();
    FORT(i,0,E)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int no=1;
    Num[1]=1;
    dfs(1,no);
    sort(res.begin(),res.end());
    FORT(i,0,res.size())
    {
        cout<<res[i].F<<' '<<res[i].S<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}