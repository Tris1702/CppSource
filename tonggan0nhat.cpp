#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair

using namespace std;
void prepare()
{

}
void solve()
{
	int n, res = 1e9;
	cin >> n;
	int a[n]={};
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
		{
			int sum = a[i] + a[j];
			if( abs(sum) < abs(res)) 
				res = sum;
		}
	cout<< res <<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}