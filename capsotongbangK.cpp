#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void solve()
{
	int n, k,res = 0;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i< n; i++) cin >> a[i];
	sort(a.begin(),a.end());
	for(int i = 0; i< n; i++)
	{
		pair<vector<int>::iterator,vector<int>::iterator> it = equal_range(a.begin(),a.end(),k- a[i]);
		res+= it.S - it.F;
		if (k-a[i] == a[i]) res -=1;
	}
	cout<<res/2<<endl;

}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}