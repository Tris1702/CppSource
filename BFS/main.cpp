#include <bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
using namespace std;
vector<vector<int> > x;
vector<int> kq;
bool dd[100]={};
int a,b,n,m;
void loang()
{
    queue<int> q;
    q.push(1);
    dd[1]=1;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        kq.pb(u);
        FORT(i,0,x[u].size()-1)
        if (dd[x[u][i]]!=1)
        {
            q.push(x[u][i]);
            dd[x[u][i]]=1;
        }
    }
}
int main()
{
    freopen("bfs.inp","r",stdin);
    freopen("bfs.out","w",stdout);
    cin>>n>>m;
    x.resize(n+1);
    FORT(i,1,m)
    {
        cin>>a>>b;
        x[a].pb(b);
        x[b].pb(a);
    }
    loang();
    sort(kq.begin(),kq.end());
    FORT(i,0,kq.size()-1) cout<<kq[i]<<endl;
    return 0;
}
