#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

void prepare()
{

}

int BS(int a[], int l, int r, int x)
{
	if (r < l) return -1;
	int mid = (r+l) / 2;
	if (a[mid] == x) return mid;
	if (a[mid] > x) return BS(a, l, mid - 1, x);
	else return BS(a, mid+1, r, x);
}

void solve()
{
	int n, x;
	cin >> n >> x;
	int a[n+1]={};
	int it = -1;
	for(int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		if (i > 0 && a[i] < a[i-1]) it = i;
	}
	if (it == -1)
	{
		cout << BS(a, 1, n, x) << endl;
	}
	else
	{
		int res1 = BS(a, 1, it-1, x), res2 = BS(a, it, n, x);
		cout <<((res1 == -1)? res2: res1 )<< endl;
	}
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}