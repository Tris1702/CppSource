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
	vector<int> a(n),b(n);
	FORT(i,0,n) cin>>a[i];
	b=a;
	int d,c;
	sort(a.begin(),a.end());
	FORT(i,0,n)
		if (a[i]!=b[i]) 
		{
			d=i+1;
			break;
		}
	FORD(i,n,0)
		if (a[i]!=b[i]) 
		{
			c=i+1;
			break;
		}	
	cout<<d<<' '<<c<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}