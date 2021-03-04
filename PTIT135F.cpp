#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char a[101][101]={};
int dd[6]={};
void kt(int ii,int jj)
{
    int vt=0;
    while (a[ii+vt][jj]=='*') vt++;
    dd[vt]++;
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=5*m+1;i++)
        for(int j=1;j<=5*n+1;j++) cin>>a[i][j];
    for(int i=2;i<=5*m+1;i+=5)
        for(int j=2;j<=5*n+1;j+=5) kt(i,j);
    for(int i=0;i<5;i++) cout<<dd[i]<<' ';
	return 0;
}
