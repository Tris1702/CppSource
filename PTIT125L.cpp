#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int l,m,n;
    cin>>l>>n>>m;
    int a[n+2]={};
    FORT(i,1,n) cin>>a[i];
    a[n+1]=l;
    n++;
    sort(a+1,a+1+n);
    int minn=1e9;
    FORT(i,m+2,n)
        minn=min(minn,a[i]-a[i-1]);
    cout<<minn;
	return 0;
}
