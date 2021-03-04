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
	cin>>n;
	vector<int> a;
	a.push_back(0);
	FORT(i,0,n) 
	{
		int so;
		cin>>so;
		if (so>=0) a.push_back(so);
	}
	sort(a.begin(),a.end());
	FORT(i,1,a.size())
	{
		if (a[i]==a[i-1]) continue;
		if (a[i]>a[i-1]+1) 
		{
			cout<<a[i-1]+1<<endl;
			return;
		}
	}
	cout<<a.size()<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}