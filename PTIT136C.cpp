#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[1001][1001]={};
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    if (n==2)
    {
        cout<<1<<' '<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        int j,k;
        if (i>1&&i<n)
        {
            j=i+1;
            k=i-1;
        }
        else
            if (i==1)
            {
                j=i+1;
                k=i+2;
            }
            else
            {
                j=i-1;
                k=i-2;
            }
        cout<<(a[i][j]-a[j][k]+a[i][k])/2<<' ';
    }
	return 0;
}
