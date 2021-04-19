#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
#define mp make_pair
#define F first
#define S second
using namespace std;

void dijk(int s, vector<vector<pair<int,int> > > &x, vector<int> &d)
{
    priority_queue <pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;
    q.push(mp(0,s));
    d[s]=0;
    while (!q.empty())
    {
        int u = q.top().S;
        int w = q.top().F;
        q.pop();
        for(int i=0; i < x[u].size(); i++)
        {
            int v = x[u][i].F;
            int ww = x[u][i].S;
            if (d[v] > w+ww)
            {
                d[v] = w+ww;
                q.push(mp(d[v], v));
            }
        }
    }
}
int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n,m, st;
        cin>>n>>m>>st;
        vector<vector<pair<int,int> > > x;
        vector<int> d(n+1,1e9);
        x.resize(n+1);
        for(int i=1;i<=m;i++)
        {
            int a,b,w;
            cin>>a>>b>>w;
            x[a].push_back(mp(b,w));
            x[b].push_back(mp(a,w));
        }
        dijk(st, x, d);
        for(int i=1;i<=n;i++) cout<<d[i]<<' ';
        cout <<endl;
    }
	return 0;
}
