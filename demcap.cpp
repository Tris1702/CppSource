#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

void init()
{

}

void solve()
{
	int n, m;
	cin >> n >> m;
	int a[n]={}, b[m]={};
	int ts[1003]={};
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) 
	{
		cin >> b[i];
		ts[b[i]]++;
	}
	sort(b, b+m);
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		if (a[i] == 0) continue;
		if (a[i] == 1) 
		{
			res += ts[0];
			continue;
		}
		res +=m- (upper_bound(b, b+n, a[i])-b) ;
		if (a[i] == 2)
		{
			res -= (ts[3] + ts[4]);
		}
		if (a[i] == 3)
		{
			res += ts[2];
		}
		res += ts[0] + ts[1];
	}
	cout << res << endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}