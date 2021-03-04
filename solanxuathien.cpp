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
	int n, k, dem = 0;
	cin>> n >> k;
	for(int i = 0; i < n; i++) 
	{
		int so; 
		cin >> so;
		if (so == k) dem++;
	}
	if (dem == 0) cout<<-1;
	else cout<<dem;
	cout<<endl;

}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}