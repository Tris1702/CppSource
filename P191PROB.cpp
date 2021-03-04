#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m,a[5001]={};
    long long res=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
            if (a[i]+a[j]==m) res++;
    cout<<res;
	return 0;
}
