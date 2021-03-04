#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    long long a[100001]={};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        a[i]=a[i-1]+so;
    }
    long long maxx=-1e18,minn=1e18,mint=minn,maxt=maxx;
    for(int i=1;i<=n;i++)
    {
        mint=min(mint,a[i]);
        maxt=max(maxt,a[i]);
        if (maxt>maxx)
        {
            maxx=maxt;
            minn=mint;
        }
    }
    cout<<max(maxx-minn,maxx);
	return 0;
}
