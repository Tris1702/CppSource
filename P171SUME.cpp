#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    long long res1=-1e18,res2=0,F[100001]={},a[100001]={},maxx=-1e18;
    cin>>n;
    int am=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]<0) am++;
        else res2+=a[i];
        maxx=max(maxx,a[i]);
    }
    if (am==n) cout<<maxx<<' '<<maxx;
    else
        if (am==0) cout<<res2<<' '<<res2;
        else
        {
            F[1]=a[1];
            for(int i=2;i<=n;i++) F[i]=max(F[i-1]+a[i],a[i]);
            for(int i=1;i<=n;i++)
                res1=max(res1,F[i]);
            cout<<res1<<' '<<res2;
        }
	return 0;
}
