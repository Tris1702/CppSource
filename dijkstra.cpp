#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
#define mp make_pair
#define F first
#define S second
using namespace std;
vector<vector<pair<int,int> > > x;
vector<int> d(1001,1e9);
void dijk(int s)
{
    queue <int> q;
    bool dd[1001]={};
    q.push(s);
    d[s]=0;
    while (!q.empty())
    {
        int tmp=q.front();
        dd[tmp]=1;
        q.pop();
        for(int i=0;i<x[tmp].size();i++)
        {
            if (d[x[tmp][i].F]>d[tmp]+x[tmp][i].S) d[x[tmp][i].F]=d[tmp]+x[tmp][i].S;
            if (dd[x[tmp][i].F]==0) q.push(x[tmp][i].F);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    x.resize(n+1);
    for(int i=1;i<=m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        x[a].push_back(mp(b,w));
        x[b].push_back(mp(a,w));
    }
    dijk(1);
    for(int i=1;i<=n;i++) cout<<d[i]<<' ';
	return 0;
}
