#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
long long mod = 1e9+7;
void prepare()
{

}
void solve()
{
	int n;
	long long res = 0;
	cin>> n;
	long long a[n]={};
	FORT(i,0,n) cin>>a[i];
	sort(a,a+n);
	FORT(i,0,n) res=(res + (a[i]*i)%mod )%mod;
	cout<<res<<endl;

}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}