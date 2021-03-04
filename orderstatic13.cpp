#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<long long> b(m),a(n);
	FORT(i,0,n) 
	{
		cin>>a[i];
		if (i>0) a[i]+=a[i-1];
	}
	FORT(i,0,m) 
	{
		cin>>b[i];
		if (i>0) b[i]+=b[i-1];
	}
	if (m<n) 
	{
		swap(a,b);
		swap(n,m);
	}
	long long res=b.back();
	FORT(i,0,n)
	{
		res=max(res,a[i]+b[m-1]-b[i]);
	}
	FORT(i,0,n)
	{
		res=max(res,b[i]+a[n-1]-a[i]);
	}
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}