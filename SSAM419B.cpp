#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
using namespace std;
vector<int> x[1001]={};
void BFS(int s)
{
    bool dd[1001]={};
    queue<int> q;
    q.push(s);
    dd[s]=1;
    while (!q.empty())
    {
        int tmp=q.front();
        q.pop();
        cout<<tmp<<' ';
        for(int i=0;i<x[tmp].size();i++)
            if (dd[x[tmp][i]]==0)
        {
            q.push(x[tmp][i]);
            dd[x[tmp][i]]=1;
        }
    }
    cout<<endl;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        for(int i=1;i<=1000;i++) x[i].resize(0);
        int n,m,u;
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++)
        {
            int a,b;
            cin>>a>>b;
            x[a].push_back(b);
            x[b].push_back(a);
        }
        BFS(u);
    }
	return 0;
}
