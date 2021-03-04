#include<iostream>
#include<math.h>
using namespace std;
int a[10001][10001]={};
int main()
{
    int n,m;
    long long s=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
    {
        if (j-1>0)
        {
            if (a[i][j-1]<a[i][j]) s+=a[i][j]-a[i][j-1];
        } else s+=a[i][j];
        if (j+1<=n)
        {
            if (a[i][j+1]<a[i][j]) s+=a[i][j]-a[i][j+1];
        } else s+=a[i][j];
        if (i-1>0)
        {
            if(a[i-1][j]<a[i][j]) s+=a[i][j]-a[i-1][j];
        } else s+=a[i][j];
        if (i+1<=m)
        {
            if (a[i+1][j]<a[i][j]) s+=a[i][j]-a[i+1][j];
        } else s+=a[i][j];
    }
    cout<<s+n*m;
    return 0;
}
