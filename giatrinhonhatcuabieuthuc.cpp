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
	int n;
	long long res =0;
	cin>>n;
	vector<int> a(n), b(n);
	for(int i = 0; i< n;i++) cin>>a[i];
	for(int i = 0; i< n;i++) cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(), greater<int>());
	for(int i = 0; i< n;i++)
	{
		res += a[i]*b[i];
	}
	cout<<res<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}
