#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
using namespace std;
int n,m;
bool dd[251]={};
vector<vector<int> > x;
void loang(int sp)
{
    queue<int> q;
    q.push(sp);
    dd[sp]=1;
    while (!q.empty())
    {
        int tmp=q.front();
        q.pop();
        for(int i=0;i<x[tmp].size();i++)
        if (dd[x[tmp][i]]==0)
        {
            dd[x[tmp][i]]=1;
            q.push(x[tmp][i]);
        }
    }
}
int main()
{
    cin>>n>>m;
    x.resize(n+1);
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    loang(1);
    bool kt=0;
    for(int i=1;i<=n;i++)
        if (dd[i]==0)
        {
            cout<<i<<endl;
            kt=1;
        }
    if (kt==0) cout<<0;
	return 0;
}
