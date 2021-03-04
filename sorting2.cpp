#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int x;
bool cmp(pair<int,int> a,pair<int,int> b)
{
	if (fabs(x-a.F)<fabs(x-b.F)) return 1;
	if (fabs(x-a.F)==fabs(x-b.F)&&a.S<b.S) return 1;
	return 0;
}
void solve()
{
	int n;
	cin>>n>>x;
	vector<pair<int,int> > a(n);
	FORT(i,0,n) 
	{
		cin>>a[i].F;
		a[i].S=i;
	}
	sort(a.begin(),a.end(),cmp);
	FORT(i,0,n) cout<<a[i].F<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}