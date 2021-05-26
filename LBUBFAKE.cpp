#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n;

int LB(int a[], int l, int r, int x)
{
	if (l > r) return -1;
	int mid = (l+r)/2;
	if (a[mid] == x)
	{
		if (mid == 0 || a[mid-1] < x) return mid;
		else 
			return LB(a, l, mid-1, x);
	}
	if (a[mid] < x) return LB(a, mid+1, r, x);
	return LB(a, l, mid-1, x);
}
int UB(int a[], int l, int r, int x)
{
	if (l > r) return -1;
	int mid = (l+r)/2;
	if (a[mid] == x)
	{
		if (mid == n-1 || a[mid+1] > x) return mid;
		else 
			return UB(a, mid+1, r, x);
	}
	if (a[mid] < x) return UB(a, mid+1, r, x);
	return UB(a, l, mid-1, x);
}
void solve()
{
	n = 5;
	int a[n]={2,2,2,2,5};
	cout <<LB(a, 0, n-1, 2)<<' '<<UB(a, 0, n-1, 2);
}	
int main()
{
	int t = 1;
	// cin >> t;
	while (t--) solve();
}