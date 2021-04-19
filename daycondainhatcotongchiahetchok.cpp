#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n] = {};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		a[i]%=k;
	}
	vector<int> F(k,-1e9), FF(k);
	F[0] = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < k; j++)
		{
			int tmp = (j-a[i]) % k;
			if (tmp < 0) tmp += k;
			FF[j] = max(F[j], F[tmp] +1);
		}
		F=FF;
	}
	cout << F[0] << endl;
	
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}