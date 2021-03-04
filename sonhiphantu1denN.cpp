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
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int so = i;
		string res = "";
		while (so > 0)
		{
			if (so % 2) res = '1'+res;
			else res = '0'+res;
			so/=2;
		}
		cout<<res<<' ';
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}