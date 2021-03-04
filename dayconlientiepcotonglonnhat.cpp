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
	int a[n] ={};
	for(int i = 0; i < n; i++) cin >> a[i];
	int res =0, sum = 0;
	for(int i: a)
	{
		sum+= i;
		if( sum < 0 ) sum = 0;
		res = max( res, sum);
	}
	cout<< res<< endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}