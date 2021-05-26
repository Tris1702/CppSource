#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

void init()
{

}

void solve()
{
	int n;
	cin >> n;
	int a[n]={};
	bool dd[1000006] ={};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if (dd[a[i]]) continue;
		cout << a[i]<< ' ';
		dd[a[i]] = 1;
	}
}
int main()
{
	int t = 1;
	// cin >> t;
	while (t--) solve();
}