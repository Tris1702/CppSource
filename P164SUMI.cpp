#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,k,a[55]={},res=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        if (a[i]>=a[k]&&a[i]>0) res++;
    cout<<res;
	return 0;
}
