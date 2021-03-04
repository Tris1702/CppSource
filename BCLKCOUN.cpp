#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define mp make_pair
#define F first
#define S second
#include <queue>
using namespace std;
char x[101][101];
int n,m;
bool dd[101][101]={};
pair<int,int> buoc[8]={mp(-1,-1),mp(-1,0),mp(-1,1),mp(0,-1),mp(0,1),mp(1,-1),mp(1,0),mp(1,1)};
void loang(int a,int b)
{
    queue <pair<int,int> >q;
    q.push(mp(a,b));
    while (!q.empty())
    {
        pair<int,int> tmp=q.front();
        dd[tmp.F][tmp.S]=1;
        q.pop();
        for(int i=0;i<8;i++)
            if (tmp.F+buoc[i].F>0&&tmp.F+buoc[i].F<=n&&tmp.S+buoc[i].S>0&&tmp.S+buoc[i].S<=m&&dd[tmp.F+buoc[i].F][tmp.S+buoc[i].S]==0&&x[tmp.F+buoc[i].F][tmp.S+buoc[i].S]=='W')
        {
            dd[tmp.F+buoc[i].F][tmp.S+buoc[i].S]=1;
            q.push(mp(tmp.F+buoc[i].F,tmp.S+buoc[i].S));
        }
    }
}
int main()
{
    cin>>n>>m;
    int res=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>x[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if (dd[i][j]==0&&x[i][j]=='W')
            {
                res++;
                loang(i,j);
            }
    cout<<res;
	return 0;
}
