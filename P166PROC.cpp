#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,cap=0;
    char a[101][101]={};
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        int dem=0;
        for(int j=1;j<=n;j++)
            if (a[i][j]=='C') dem++;
        cap+=dem*(dem-1)/2;
    }
    for(int j=1;j<=n;j++)
    {
        int dem=0;
        for(int i=1;i<=n;i++)
            if (a[i][j]=='C') dem++;
        cap+=dem*(dem-1)/2;
    }
    cout<<cap;
	return 0;
}
