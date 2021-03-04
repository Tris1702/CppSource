#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[5][5]={};
bool kt(int i,int j)
{
    int dem=0;
    if (a[i][j]==1) dem++;
    if (a[i][j+1]==1) dem++;
    if (a[i+1][j]==1) dem++;
    if (a[i+1][j+1]==1) dem++;
    return (dem>=3);
}
bool kt2(int i,int j)
{
    int dem=0;
    if (a[i][j]==0) dem++;
    if (a[i][j+1]==0) dem++;
    if (a[i+1][j]==0) dem++;
    if (a[i+1][j+1]==0) dem++;
    return (dem>=3);
}
int main()
{
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
    {
        char c;
        cin>>c;
        if (c=='#') a[i][j]=1;
        else a[i][j]=0;
    }
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
        if (kt(i,j)||kt2(i,j))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
	return 0;
}
