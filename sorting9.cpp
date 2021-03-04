#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,dem=0,k;
	cin>>n>>k;
	vector<int> a(n);
	FORT(i,0,n) cin>>a[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
			if(a[i]+a[j]==k) dem++;
	cout<<dem<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}