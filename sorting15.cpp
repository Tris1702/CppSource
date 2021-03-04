#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,k;
	long long res=0;
	cin>>n>>k;
	vector<int> a(n);
	FORT(i,0,n) cin>>a[i];
	sort(a.begin(),a.end());
	FORT(i,0,n)
	{
		int it=lower_bound(a.begin(),a.end(),a[i]+k)-a.begin();
		long long tmp=it-i-1;
		if (tmp>0) res+=tmp;
	}
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}