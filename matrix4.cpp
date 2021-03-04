#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int n,m;
const pair<int,int> b[8]={mp(0,1),mp(0,-1),mp(1,0),mp(-1,0),mp(1,1),mp(-1,-1),mp(-1,1),mp(1,-1)};
void bfs(pair<int,int> s,vector<vector<bool> > &dd, vector<vector<bool> > &a )
{
    queue<pair<int,int> > q;
    dd[s.F][s.S]=1;
    q.push(s);
    while (!q.empty())
    {
        pair<int,int> u=q.front();
        q.pop();
        FORT(i,0,8)
        {
            pair<int,int> v=mp(u.F+b[i].F,u.S+b[i].S);
            if (v.F>=0 && v.F<n && v.S>=0 && v.S<m && a[v.F][v.S] && !dd[v.F][v.S])
            {
                dd[v.F][v.S]=1;
                q.push(v);
            }
        }
    }
}
void solve()
{
    cin>>n>>m;
    vector<vector<bool> >dd,a; 
    dd.resize(n,vector<bool> (m,0));
    a.resize (n,vector<bool> (m));
    vector<pair<int,int> > sv;
    FORT(i,0,n)
        FORT(j,0,m) 
        {
            int so;
            scanf("%d",&so);
            a[i][j]=(so==0)? 0: 1;
            if (a[i][j]==1) sv.push_back(mp(i,j));
        }
    int res=0;
    FORT(i,0,sv.size())
        if (!dd[sv[i].F][sv[i].S])
        {
            bfs(sv[i],dd,a);
            res++;
        }
    printf("%d\n",res);
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}