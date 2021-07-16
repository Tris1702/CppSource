#include<bits/stdc++.h>

using namespace std;
int dem(int n)
{
	int dem = 0;
	while (n > 1)
	{
		dem++;
		n/=2;
	}
	return (dem+1)*2+1;
}
int main()
{
	int n;
	cin >> n;
	cout << dem(n);
	return 0;
}
