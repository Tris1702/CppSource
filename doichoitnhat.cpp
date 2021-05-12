#include<bits/stdc++.h>

using namespace std;
void solve()
{
	int n, dem = 0;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++)
	{
		int minn = i;
		for(int j = i+1; j < n; j++)
		{
			if (a[j] < a[minn]) 
			{
				minn = j;
			}
		}
		if (minn != i)
		{
			swap(a[i], a[minn]);
			dem++;
		}
	}
    cout << dem << endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}