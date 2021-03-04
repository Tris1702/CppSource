#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n;
char a[31][31]={};
bool kt(int ii,int jj)
{
    if (ii+1<=n&&ii+2<=n&&a[ii][jj]==a[ii+1][jj]&&a[ii][jj]==a[ii+2][jj]) return 1;
    if (jj+1<=n&&jj+2<=n&&a[ii][jj]==a[ii][jj+1]&&a[ii][jj]==a[ii][jj+2]) return 1;
    if (ii+1<=n&&jj+1<=n&&ii+2<=n&&jj+2<=n&&a[ii][jj]==a[ii+1][jj+1]&&a[ii][jj]==a[ii+2][jj+2]) return 1;
    if (ii+1<=n&&ii+2<=n&&jj-1>0&&jj-2>0&&a[ii][jj]==a[ii+1][jj-1]&&a[ii][jj]==a[ii+2][jj-2]) return 1;
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if (a[i][j]!='.'&&kt(i,j))
        {
            cout<<a[i][j];
            return 0;
        }
    cout<<"ongoing";
	return 0;
}
