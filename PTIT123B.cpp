#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,a[21]={};
bool kt()
{
    for(int i=2;i<=n;i++)
        if (a[i]!=a[i-1]) return 0;
    return 1;
}
void bd()
{
    int luu=a[1];
    for(int k=1;k<=n;k++)
        if (k<n) a[k]=fabs(a[k]-a[k+1]);
        else a[k]=fabs(a[k]-luu);
}
int main()
{
    int t=0;
    while (1)
    {
        t++;
        cin>>n;
        if (n==0) return 0;
        for(int i=1;i<=n;i++) cin>>a[i];
        int j;
        for(j=1;j<=1000;j++)
        {
            if (kt())
            {
                cout<<"Case "<<t<<": "<<j-1<<" iterations"<<endl;
                break;
            }
            else bd();
        }
        if (j>1000) cout<<"Case "<<t<<": not attained"<<endl;
    }
	return 0;
}
