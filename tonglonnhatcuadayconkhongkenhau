#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)
#define ll long long
using namespace std;
void prepare()
{

}
void solve()
{
	ll n, res = 0;
	cin >> n;
	ll a[n], F[n]={};
	for(int i = 0; i < n; i++) cin >> a[i];
	if (n < 2)
	{
		for(int i = 0; i < n; i++) res = max(res, a[i]);
		cout<<res<<endl;
		return;
	}
	F[0] = a[0];
	F[1] = a[1];
	F[2] = a[0] + a[2];
	for(int i = 3; i < n; i++)
	{
		F[i] = max(F[i-2], F[i-3]) + a[i];
		res = max(res,F[i]);
	}
	cout<<res<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}