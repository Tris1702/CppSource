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
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	cout << 1LL*a.back() * b[0]<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}