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
	int a[n], b[n];
	FORT(i,0,n) cin>> a[i];
	FORT(i,0,n-1) cin>> b[i];
	int d = 0;
	for(; d < n-1; d++)
		if (a[d] != b[d]) break;
	cout<< d+1<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}