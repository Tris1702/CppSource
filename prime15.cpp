#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int m;
	cin>>m;
	for(int n=1;n<=m;n++)
	{
		bool check=1;
		for(int i=2;i<=sqrt(n);i++)
			if (n%i==0)
			{
				cout<<i<<' ';
				check=0;
				break;
			}
		if (check) cout<<n<<' ';
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