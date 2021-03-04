#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int tcs(int a)
{
	int res=0;
	while (a>0)
	{
		res+=a%10;
		a/=10;
	}
	return res;
}
void solve()
{
	int n;
	cin>>n;
	while (n>=10) n=tcs(n);
	cout<<n<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}