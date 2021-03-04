#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,m=0;
	cin>>n;
	vector<int> a(n);
	FORT(i,0,n) cin>>a[i];
	sort(a.begin(),a.end());
	FORT(i,1,n) 
		if (a[i]>a[i-1]) m+=a[i]-a[i-1]-1;
	cout<<m<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}