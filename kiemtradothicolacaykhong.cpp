#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int n;
vector<int> father;
int findRoot(int u)
{
	if (father[u] == u) return u;
	return findRoot(father[u]);
}
void solve()
{
	cin >> n;
	father.clear();
	father.resize(n+1);
	for(int i = 1; i <= n; i++) father[i] = i;
	for(int i = 0; i < n-1; i++)
	{
		int a, b;
		cin >> a >> b;
		int father1 = findRoot(a), father2 = findRoot(b);
		if (father1 != father2)
		{
			if (a > b) father[a] = father[b];
			else father[b] = father[a];
		}
		else 
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES"<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}