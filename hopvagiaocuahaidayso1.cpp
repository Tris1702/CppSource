#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> tsa(1e5+1,0),tsb(1e5+1,0);
	FORT(i,0,n) 
	{
		int so;
		cin>>so;
		tsa[so]++;
	}
	FORT(i,0,m) 
	{
		int so;
		cin>>so;
		tsb[so]++;
	}
	FORT(i,0,1e5+1)
	{
		int sl=max(tsa[i],tsb[i]);
		while (sl--) cout<<i<<' ';
	}
	cout<<endl;
	FORT(i,0,1e5+1)
	{
		int sl=min(tsa[i],tsb[i]);
		while(sl--) cout<<i<<' ';
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}