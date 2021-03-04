#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void prepare()
{

}
ll rev(ll n)
{
	ll res = 0;
	while (n >0)
	{
		res = res*10 + n %10;
		n/=10;
	}
	return res;
}
ll poww(ll a, ll b)
{
	if(b == 0) return 1;
	long long res = poww(a,b/2);
	if(b%2 == 0) return res%mod * res%mod;
	return a*(res%mod * res%mod)%mod;
}
void solve()
{
	ll n;
	cin >> n;
	cout << poww(n, rev(n))<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}