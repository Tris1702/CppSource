#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,a[55]={},res=1e9;
    cin>>n>>m;
    for(int i=1;i<=m;i++) cin>>a[i];
    sort(a+1,a+m+1);
    for(int i=1;i<=m-n+1;i++)
        res=min(res,a[i+n-1]-a[i]);
    cout<<res;
	return 0;
}
