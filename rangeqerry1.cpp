#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,Q;
	cin>>n>>Q;
	vector<int> a(n);
	FORT(i,0,n) cin>>a[i];
	FORT(i,1,n)	a[i]+=a[i-1];
	FORT(q,0,Q)
	{
		int l,r;
		cin>>l>>r;
		l--;
		r--;
		if (l==0) cout<<a[r]<<endl;
		else cout<<a[r]-a[l-1]<<endl;
	}
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}