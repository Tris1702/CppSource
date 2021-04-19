#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<int> a;
int n, k, res;

void Try(int vt, int sl)
{
	if (sl == k) res++;
	for(int i = vt+1; i < n; i++)
		if (a[i] > a[vt])
		{
			Try(i, sl+1);
		}
}

void init()
{
	a.clear();
	a.resize(n);
	res = 0;
}

void solve()
{
	cin >> n >> k;
	init();
	for(int i = 0; i < n; i++) cin >> a[i];
	Try(-1, 0);
	cout << res << endl;
}
int main()
{
	int t = 1;
	
	// cin >> t;
	while (t--) solve();
}