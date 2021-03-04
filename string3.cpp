#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string change(string s)
{
	string res="";
	for(int i=0;i<s.length();i+=2)
	{
		if (s[i]=='0'&&s[i+1]=='0') res=res+'0';
		if (s[i]=='0'&&s[i+1]=='1') res=res+'1';
		if (s[i]=='1'&&s[i+1]=='0') res=res+'2';
		if (s[i]=='1'&&s[i+1]=='1') res=res+'3';
	}
	return res;
}
void solve()
{
	string s;
	int deml=0,demc=0;
	cin>>s;
	if (s.length()%2) s='0'+s;
	s=change(s);
	FORT(i,0,s.length())
		if (i%2) deml+=s[i]-'0';
		else demc+=s[i]-'0';
	if (demc<deml) swap(demc,deml);
	((demc-deml)%5)? (cout<<"No"<<endl): (cout<<"Yes"<<endl);
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}