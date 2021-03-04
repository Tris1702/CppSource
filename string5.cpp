#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
	int maxx;
	string s;
	cin>>s;
	maxx=s.length()/2;
	vector<int> dd(26,0);
	for(int i=0;i<s.length();i++) dd[s[i]-'a']++;
	for(int i=0;i<26;i++)
	{
		if (dd[i]>maxx) 
		{
			cout<<0<<endl;
			return;
		}
	}
	cout<<1<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}