#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const long long mod=1e9+7;
long long poww(long long a,int b)
{
	long long res=1;
	for(int i=b;i;i>>=1)
	{
		if (i&1) res=(res*a)%mod;
		a=(a*a)%mod;
	}
	return res;
}
void solve()
{
	int n;
	long long x;
	long long res=0;
	cin>>n>>x;
	FORT(i,1,n+1)
	{
		int so;
		cin>>so;
		res=(res+(so*poww(x,n-i))%mod)%mod;
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