#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int r,c,u,v;
    cin>>r>>c;
    char a[105][105]={};
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++) cin>>a[i][j];
    cin>>u>>v;
    for(int i=1;i<=r;i++)
    {
        int jj=c+1;
        for(int j=c;j>0;j--)
        {
            a[i][jj]=a[i][j];
            jj++;
        }
    }
    int ii=r+1;
    for(int i=r;i>0;i--)
    {
        for(int j=1;j<=c*2;j++) a[ii][j]=a[i][j];
        ii++;
    }
    if (a[u][v]=='#') a[u][v]='.';
    else a[u][v]='#';
    for(int i=1;i<=r*2;i++)
    {
        for(int j=1;j<=c*2;j++) cout<<a[i][j];
        cout<<endl;
    }
	return 0;
}
