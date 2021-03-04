#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
bool check;
int n;
void Try(int a[],int vt, int k, int sum)
{
	if(check) return;
	if (sum > k) return;
	if (vt >= n) 
	{
		if (sum == k) check = 1;
		return;
	}
	Try(a, vt+1, k, sum + a[vt]);
	Try(a, vt+1, k, sum);
}
void solve()
{
	int count = 0;
	cin >> n;
	int a[n]={};
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		count+=a[i];
	}
	if (count % 2)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		Try(a, 0, count/2, 0);
		if (check) cout <<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}