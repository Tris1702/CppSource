#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,nhom=0,a[100005]={};
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    a[n+1]=1e9;
    n++;
    for(int i=1;i<n;i++)
    {
        if (a[i+1]-a[i]>k) nhom++;
    }
    cout<<nhom;
	return 0;
}
