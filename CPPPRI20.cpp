#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool nt(int a)
{
	if (a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int gcd(int a,int b)
{
	while (a>0)
	{
		if (a<b) swap(a,b);
		a%=b;
	}
	return b;
}
void solve()
{
	int x,Count=1;
	cin>>x;
	FORT(i,2,x+1)
		if (gcd(x,i)==1) Count++;
	cout<<nt(Count)<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}