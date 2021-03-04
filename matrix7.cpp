#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n;
	cin>>n;
	FORT(i,0,n)
	{
		vector<int> a(n);
		FORT(j,0,n) cin>>a[j];
		if (!(i%2))
		{
			FORT(j,0,n) cout<<a[j]<<' ';
		}
		else
			FORD(j,n,0) cout<<a[j]<<' ';
	}
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}