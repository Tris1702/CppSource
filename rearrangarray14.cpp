#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int k,n;
	cin>>k>>n;
	vector<int> a;
	FORT(i,0,k)
	{
		FORT(j,0,n) 
		{
			int so;
			cin>>so;
			a.push_back(so);
		}
	}
	sort(a.begin(),a.end());
	FORT(i,0,a.size()) cout<<a[i]<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}