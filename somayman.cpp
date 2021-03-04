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
	int n, x7=0,x4=0;
	cin >> n;
	x7 = n/7;
	while (x7 >= 0)
	{
		if ((n-x7*7)%4 == 0) 
		{
			x4 = (n-x7*7)/4;
			break;
		}
		x7--;
	}
	if (x7 <0) cout<<-1;
	else
	{
		for(int i = 0; i < x4; i++) cout<<4;
		for(int i = 0; i < x7; i++) cout<<7;
	}
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}