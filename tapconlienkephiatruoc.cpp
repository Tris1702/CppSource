#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<int> a;
int n, k;
void in(int check)
{
	if (check)
	{
		for(int i = 0; i < k; i++)
		{
			cout << n-k+i+1<<' ';
		}
	}
	else
	{
		for(int i: a)
		{
			cout << i << ' ';
		}
	}
	cout<<endl;
}
void solve()
{
	cin >> n >> k;
	a.resize(k);
	FORT(i, 0, k) cin >> a[i];
	int i = k-1;
	while (i > 0 && a[i] == a[i-1] + 1) i--;
	if (i == 0)
	{
		if (a[i] == 1) 
		{
			in(1);
			return;
		}
	}
	a[i]--;
	i++;
	for(; i < k ;i++)
	{
		a[i] = n-k+i+1;
	}
	in(0);
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}