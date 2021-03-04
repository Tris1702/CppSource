#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
typedef long long ll;
const ll mod = 1e9+7;
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.S<b.S;
}
void solve()
{
	priority_queue<ll,vector<ll>, greater<ll> > q;
    ll res = 0;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		ll so;
		cin >> so;
		q.push(so);
	}
	while (q.size()>1)
	{
		ll tmp1 = q.top();
		q.pop();
		ll tmp2 = q.top();
		q.pop();
		res=(res+(tmp1+tmp2)%mod)%mod;
		q.push((tmp1+tmp2)%mod);
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