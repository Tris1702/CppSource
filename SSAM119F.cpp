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
vector<vector<long long> >a,F;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        a.resize(0);
        F.resize(0);
        a.resize(n+1);
        F.resize(n+1);
        for(int i=1;i<=n;i++)
        {
            a[i].resize(m+1);
            F[i].resize(m+1);
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
                F[i][j]=1e18;
            }
        }
        F[1][1]=a[1][1];
        for(int j=2;j<=m;j++) F[1][j]=F[1][j-1]+a[1][j];
        for(int i=2;i<=n;i++) F[i][1]=F[i-1][1]+a[i][1];
        for(int i=2;i<=n;i++)
            for(int j=2;j<=m;j++)
                F[i][j]=min(min(min(F[i][j],F[i-1][j]),F[i-1][j-1]),F[i][j-1])+a[i][j];
        cout<<F[n][m]<<endl;
    }
	return 0;
}
