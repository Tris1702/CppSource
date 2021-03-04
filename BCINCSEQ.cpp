#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a[100001]={},res=0;
    int F[100001]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    F[1]=1;
    for(int i=2;i<=n;i++)
        if (a[i]>=a[i-1]) F[i]=F[i-1]+1;
        else F[i]=1;
    for(int i=1;i<=n;i++) res=max(res,F[i]);
    cout<<res;
	return 0;
}
