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
	int n;
	cin >> n;
	int so0=0, so1=0, so2=0;
	for(int i = 0; i < n; i++)
	{
		int so;
		cin >> so;
		if(so == 0 ) so0++;
		else
			if(so == 1) so1++;
			else so2++;
	}
	for(int i = 0; i < so0; i++) cout<<0<<' ';
	for(int i = 0; i < so1; i++) cout<<1<<' ';
	for(int i = 0; i < so2; i++) cout<<2<<' ';

	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}