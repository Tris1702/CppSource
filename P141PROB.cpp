#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char a[55][55]={};
int r,c;
int lc(int i,int j)
{
    int dem=0;
    if (i-1>0&&j-1>0&&a[i-1][j-1]=='o') dem++;
    if (i-1>0&&j+1<=c&&a[i-1][j+1]=='o') dem++;
    if (i-1>0&&a[i-1][j]=='o') dem++;

    if (j-1>0&&a[i][j-1]=='o') dem++;
    if (j+1<=c&&a[i][j+1]=='o') dem++;

    if (i+1<=r&&j-1>0&&a[i+1][j-1]=='o') dem++;
    if (i+1<=r&&a[i+1][j]=='o') dem++;
    if (i+1<=r&&j+1<=c&&a[i+1][j+1]=='o') dem++;
    return dem;
}
int main()
{
    int vtx=0,vty=0;
    cin>>r>>c;
    int maxx=0,res=0;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++) cin>>a[i][j];
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            if(a[i][j]=='.')
            {
                int tmp=lc(i,j);
                if (tmp>maxx)
                {
                    res=1;
                    maxx=tmp;
                    vtx=i;
                    vty=j;
                }
                else
                    if (tmp==maxx) res++;
            }
    a[vtx][vty]='o';
    res=0;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            if (a[i][j]=='o')
            {
                res+=lc(i,j);
            }
    cout<<res/2;
	return 0;
}
