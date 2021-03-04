#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<queue>
#define F first
#define S second
#define mp make_pair
using namespace std;
int n,m;
char a[105][105]={};
bool dd[105][105]={};
void loang(int i,int j)
{
    queue <pair<int,int> >q;
    q.push(mp(i,j));
    dd[i][j]=1;
    while (!q.empty())
    {
        pair<int,int> tmp=q.front();
        q.pop();
        if (tmp.F+1<=n&&a[tmp.F+1][tmp.S]=='#'&&dd[tmp.F+1][tmp.S]==0)
        {
            q.push(mp(tmp.F+1,tmp.S));
            dd[tmp.F+1][tmp.S]=1;
        }
        if (tmp.F-1>0&&a[tmp.F-1][tmp.S]=='#'&&dd[tmp.F-1][tmp.S]==0)
        {
            q.push(mp(tmp.F-1,tmp.S));
            dd[tmp.F-1][tmp.S]=1;
        }
        if (tmp.S+1<=m&&a[tmp.F][tmp.S+1]=='#'&&dd[tmp.F][tmp.S+1]==0)
        {
            q.push(mp(tmp.F,tmp.S+1));
            dd[tmp.F][tmp.S+1]=1;
        }
        if (tmp.S-1>0&&a[tmp.F][tmp.S-1]=='#'&&dd[tmp.F][tmp.S-1]==0)
        {
            q.push(mp(tmp.F,tmp.S-1));
            dd[tmp.F][tmp.S-1]=1;
        }
    }
}
int main()
{
    cin>>n>>m;
    int dem=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        if (a[i][j]=='#'&&dd[i][j]==0)
        {
            dem++;
            loang(i,j);
        }
    cout<<dem;
	return 0;
}
