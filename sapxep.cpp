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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	bool res = binary_search(a.begin(), a.end(), x);
	if (res) cout<<1;
	else cout<< -1;
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}