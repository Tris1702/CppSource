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
	vector<bool> dd(10,0);
	FORT(i,0,n)
	{
		int so;
		cin>>so;
		if (so==0) dd[0]=1;
		while (so>0)
		{
			dd[so%10]=1;
			so/=10;
		}
	}
	FORT(i,0,10)
		if (dd[i]) cout<<i<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}