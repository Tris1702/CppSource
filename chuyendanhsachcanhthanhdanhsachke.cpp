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
	cin >> n >>m;
	vector< vector <int> > a (n+1);
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back (y);
		a[y].push_back (x);
	}
	for(int i = 1; i <= n; i++)
	{
		cout << i<< ": ";
		for(int tmp: a[i]) cout << tmp <<' ';
		cout<<endl;
	}
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}