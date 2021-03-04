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
	int deml=0,demc=0;
	cin>>s;
	FORT(i,0,s.length())
		if (i%2) deml+=s[i]-'0';
		else demc+=s[i]-'0';
	if (demc<deml) swap(demc,deml);
	((demc-deml)%11)? (cout<<0<<endl): (cout<<1<<endl);
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}