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
	string s1, s2; cin >> s1 >> s2;
	int n = s1.length(),m = s2.length();
	int F[n+1][m+1]={};
	for(int i = 1; i <= m; i++) F[0][i] = i;
	for(int i = 1; i <= n; i++) F[i][0] = i; 
	for(int i = 1; i <=n ;i++)
		for(int j = 1; j<= m; j++)
		{
			if (s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1];
			else F[i][j] = min(F[i][j-1], min(F[i-1][j-1], F[i-1][j]) )+1;
		}
	cout << F[n][m]<<endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}