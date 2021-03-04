#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
	int n, m, k ;
	cin >> n >> m >> k;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	int d1=0, d2=0, res;
	while (k && d1 <= n && d2 <= m)
	{
		k--;
		if (a[d1] < b[d2]) 
		{
			res = a[d1];
			d1++;
		}
		else 
		{
			res = b[d2];
			d2++;
		}
	}
	while (k)
	{
		k--;
		if (d1 < n) 
		{
			res = a[d1];
			d1--;
			continue;
		}
		if (d2 < m) 
		{
			res = b[d2];
			d2--;
			continue;
		}
	}
	cout << res <<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}