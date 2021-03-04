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
	int n, k;
	cin>> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a.begin(), a.end(),greater<int>());
	for(int i = 0; i < k; i++)
	{
		cout << a[i]<<' ';
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}