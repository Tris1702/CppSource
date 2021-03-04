#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int n,res=-1e9,sum=0;
	cin>>n;
	FORT(i,0,n) 
	{
		int so;
		cin>>so;
		sum+=so;
		res=max(res,sum);
		if (sum<0) sum=0;
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