#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
pair<int,int> b[8]={mp(-1,-1),mp(-1,0),mp(-1,1),mp(0,-1),mp(0,1),mp(1,-1),mp(1,0),mp(1,1)};
vector<vector<int> > a,dd;
int n,m;

void loang(int ii,int jj,int d)
{
    queue<pair<int,int> > q;
    q.push(mp(ii,jj));
    while (!q.empty())
    {
        int u=q.front().F,v=q.front().S;
        q.pop();
        FORT(i,0,8)
        {
            int uu=u+b[i].F,vv=v+b[i].S;
            if (uu>=0&&uu<n&&vv>=0&&vv<m&&dd[uu][vv]==0&&a[uu][vv]==1)
            {
                dd[uu][vv]=d;
                q.push(mp(uu,vv));
            }
        }
    }
}
void Reset()
{
    dd.clear();
    a.clear();
    dd.resize(n,vector<int> (m));
    a.resize(n,vector<int> (m));
}
void solve()
{
    cin>>n>>m;
    Reset();
    FORT(i,0,n)
        FORT(j,0,m) cin>>a[i][j];
    int d=0;
    FORT(i,0,n)
        FORT(j,0,m)
            if (a[i][j]==1&&dd[i][j]==0)
            {
                d++;
                dd[i][j]=d;
                loang(i,j,d);
            }
    cout<<d<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}