#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

void solve()
{
	long long res=-1e9;
	int n;
	cin>>n;
	vector<long long> a(n);
	FORT(i,0,n)
	{
		cin>>a[i];
	}
	FORT(i,0,n)
		FORT(j,i,n)
		{
			long long tmp=1;
			FORT(k,i,j+1) tmp*=a[k];
			res=max(res,tmp);
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