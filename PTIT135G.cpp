#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m,minn=1e9,res=0,a[101]={};
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            for(int k=j+1;k<=n;k++)
             if (m>=(a[i]+a[j]+a[k])&&minn>m-(a[i]+a[j]+a[k]))
    {
        minn=m-(a[i]+a[j]+a[k]);
        res=a[i]+a[j]+a[k];
    }
    cout<<res;
	return 0;
}
