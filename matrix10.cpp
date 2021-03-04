#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<bool> dh(n,0),dc(m,0);
	vector<vector<int> > a(n,vector<int> (m,0));
	FORT(i,0,n)
		FORT(j,0,m) 
		{
			cin>>a[i][j];
			if (a[i][j]==1) 
			{
				dh[i]=1;
				dc[j]=1;
			}
		}
	FORT(i,0,n)
	{
		FORT(j,0,m) 
			if (dh[i]||dc[j])cout<<1<<' ';
			else cout<<0<<' ';
		cout<<endl;
	}
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}