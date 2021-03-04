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
	int n, dem = 1;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++)
	{
		bool change = 0;
		for(int j = 1; j < n; j++)
			if (a[j] < a[j-1]) 
			{
				change = 1;
				swap(a[j], a[j-1]);
			} 
		if (!change) continue;
		cout << "Buoc " << dem <<":";
		for(int j = 0; j < n; j++)
		{
			cout << ' ' << a[j] ;
		}
		cout << endl;
		dem++;
	}
}
int main()
{
	int t=1;
	//cin>>t;
	while (t--) solve();
}