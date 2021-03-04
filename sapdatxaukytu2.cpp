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
	int k;
	cin >> k;
	cin.ignore();
	string s;
	int maxx=0;
	vector<int> dd(300,0);
	cin >> s;
	for(char i: s)
	{
		dd[i]++;
		maxx = max (maxx, dd[i]);
	}
	if (maxx>(s.length()+1)/k) cout<<-1;
	else cout<<1;
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}