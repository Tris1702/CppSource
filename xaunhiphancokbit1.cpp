#include<bits/stdc++.h>

using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin>>n>>k;
		long long lim = 1 << n;
		for(long long i = 0; i < lim; i++)
		{
			int dem = 0;
			for(int vt = n - 1 ; vt >= 0; vt--)
			{
				if (i & (1 << vt)) dem++;
			}
			if (dem == k)
			{
				for(int vt = n - 1 ; vt >= 0; vt--)
				{
					cout<< bool (i & (1 << vt));
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
