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
	int n, x, vt=n;
	cin >> n >> x;
	vector<pair<int,int> > a(n);
	vector<int> b(n);
	FORT(i,0,n) 
	{
		cin >> a[i].F;
		a[i].S = i+1;
	}
	sort(a.begin(),a.end());
	for(int i = 0; i < n; i++) b[i] = a[i].F;
	int it = lower_bound(b.begin(),b.end(), x)-b.begin();
	cout << a[it].S << endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}