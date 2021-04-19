#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<vector<ll> > F;
void prepare()
{

}

ll Try(int n, int m)
{
	if (n == 0 || m == 0)
		return 1;
	if (F[n][m] != -1) return F[n][m];
	if (F[n-1][m] == -1) F[n-1][m] = Try(n-1, m);
	if (F[n][m-1] == -1) F[n][m-1] = Try(n, m-1);
	return F[n-1][m]+F[n][m-1];
}

void solve()
{
	int n, m;
	cin >> n >> m;
	F.clear();
	F.resize(n+1, vector<ll> (m+1,-1));
	cout << Try(n,m) << endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}