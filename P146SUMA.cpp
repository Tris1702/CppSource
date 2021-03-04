#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define F first
#define S second
#define mp make_pair
using namespace std;
pair<int,int> f[101][101]={};
int main()
{
    int n,res=0;
    bool a[101]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            int dem0=0,dem1=0;
            for(int k=i;k<=j;k++)
                if (a[k]==0) dem0++;
                else dem1++;
            f[i][j]=mp(dem0,dem1);
        }
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            int tmp=f[i][j].F;
            if (i-1>=1) tmp+=f[1][i-1].S;
            if (j+1<=n) tmp+=f[j+1][n].S;
            res=max(res,tmp);
        }
    cout<<res;
	return 0;
}
