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
vector<bool> res;
void dfs(int u,int no)
{
    FORT(i,0,x[u].size())
    {
        int v=x[u][i];
        if (v==Pre[u]) continue;
        if (Num[v]==0)
        {
            Num[v]=no;
            Pre[v]=u;
            dfs(v,no+1);
            if (Num[u]<=Low[v]) res[u]=1;
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
    Pre.resize(V+1,-1);
    Num.resize(V+1,0);
    Low.resize(V+1,oo);
    res.clear();
    res.resize(V+1,0);
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
    FORT(i,1,V+1)
        if (Num[i]==0)
        {
            Num[i]=1;
            dfs(i,no+1);
            int check=0;
            FORT(j,0,x[i].size())
                if(Num[x[i][j]]==2) check++;
            if (check<2) res[i]=0;
        }
    FORT(i,1,V+1)
        if (res[i]) cout<<i<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}