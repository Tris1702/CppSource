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
	int n;cin >> n;
	cin.ignore();
	bool dd[10] = {};
	string s; getline(cin,s);
	for(char c: s)
	{
		if ( c >= '0' && c <= '9')
			dd[c-'0'] = 1;
	}
	for(int i = 0; i < 10; i++)
		if (dd[i]) cout << i << ' ';
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}