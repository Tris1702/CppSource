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
	string s;
	cin >> s;
	int n = s.length();
	vector <int> a(n);
	for(int i = 1; i <= n; i++)
	{
		a[i-1] = i;
	}
	do
	{
		for(int x: a)
		{
			cout<< s[x-1];
		}
		cout<<' ';
	} while (next_permutation(a.begin(), a.end()));
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}