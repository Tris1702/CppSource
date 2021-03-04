#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
long long a[105][105]={};

int main()
{
    int n,m;
    long long res=-1e18;
    cin>>n>>m;
    for(int i=0;i<=n;i++) a[i][0]=-1e9;
    for(int j=0;j<=m;j++) a[0][j]=a[n+1][j]=-1e9;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
    for(int j=2;j<=m;j++)
        for(int i=1;i<=n;i++) a[i][j]=max(max(a[i-1][j-1],a[i][j-1]),a[i+1][j-1])+a[i][j];
    for(int i=1;i<=n;i++) res=max(res,a[i][m]);
    cout<<res;
	return 0;
}
