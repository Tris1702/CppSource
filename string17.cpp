#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	string s;
	cin>>s;
	vector<int> dd(26,0);
	FORT(i,0,s.length()) dd[s[i]-'A']++;
	FORT(i,0,s.length())
		if (dd[s[i]-'A']==1) cout<<s[i];
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}