#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)
typedef long long ll;
using namespace std;
ll mod = 1e9+7;
void prepare()
{

}
ll poww(ll a, ll b)
{
	ll res = 1;
	for(ll i = b; i ; i = i >>1)
	{
		if (i & 1) res = (res * a) % mod;
		a = (a * a) % mod; 
	}
	return res;
}
void solve()
{
	ll a, b;
	cin>> a >> b;
	cout<<poww(a,b)<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}