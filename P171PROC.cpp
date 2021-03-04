#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,l,a[100001]={};
    double maxx=0;
    cin>>n>>l;
    bool dd=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++) maxx=max(maxx,(double)(a[i]-a[i-1])/2);
    maxx=max(maxx,(double)a[1]-0);
    maxx=max(maxx,(double)l-a[n]);
    printf("%.10lf",maxx);
	return 0;
}
