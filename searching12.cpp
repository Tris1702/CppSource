#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	FORT(i,0,n) cin>>a[i];
	sort(a.begin(),a.end());
	FORT(i,0,n)
	{
		int j=lower_bound(a.begin(),a.end(),a[i]-x)-a.begin();
		if (j<a.size()&&a[i]-a[j]==x)
		{
			cout<<1<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}