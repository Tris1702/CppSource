#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
map<pair<int,int>,bool> dd;
vector<vector<int> > a;
int n,m,res;
const pair<int,int> b[4]={mp(-1,0),mp(0,-1),mp(1,0),mp(0,1)};
struct cmp
{
    bool operator() (pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
    {
        return a.S>b.S;
    }
};
void loang(int x,int y)
{
    priority_queue<pair<pair<int,int>,int >,vector<pair<pair<int,int>,int > >,cmp > q;
    q.push(mp(mp(x,y),a[0][0]));
    while (!q.empty())
    {
        pair<int,int> u=q.top().F;
        int w=q.top().S;
        dd[u]=1;
        q.pop();
        if (u.F==n-1&&u.S==m-1) 
        {
            cout<<w<<endl;
            return;
        }
        FORT(i,0,4)
        {
            pair<int,int> v=u;
            v.F+=b[i].F;
            v.S+=b[i].S;
            if (v.F>=0&&v.S>=0&&v.F<n&&v.S<m&&dd[v]==0) 
                q.push(mp(v,w+a[v.F][v.S]));
        }
    }
}
void Reset()
{
    res=1e9;
    dd.clear();
    a.clear();
    a.resize(n,vector<int> (m));
}
void solve()
{
    cin>>n>>m;
    Reset();
    FORT(i,0,n)
        FORT(j,0,m) cin>>a[i][j];
    loang(0,0);
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}