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
	long long so1=0, so2=0;
	cin >> n;
	int a[n]={};
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	for(int i = 0; i < n; i++)
	{
		if(i%2==0) so1 = so1 * 10 + a[i];
		else so2 = so2 *10 + a[i];
	}
	cout<<so1+so2<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}