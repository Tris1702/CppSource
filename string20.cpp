#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool kt (char c)
{
	return (c=='\n'||c=='\t'||c==' ');
}
void solve()
{
	string s;
	int dem=0;
	
	vector<string> f;
	getline(cin,s);
	while (kt(s[0])) s.erase(0,1);
	while (kt(s[s.length()-1])) s.erase(s.length()-1,1);
	int i=0;
	while (i<s.length())
	{
		while (i<s.length() && kt(s[i])) i++;
		string tmp="";
		while (i<s.length() && !kt(s[i]))
		{
			tmp=tmp+s[i];
			i++;
		}
		if (tmp.length()>0) f.push_back(tmp);
	}
	FORD(i,(int)f.size(),0) cout<<f[i]<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	cin.ignore();
	FORT(t,0,T) solve();
	return 0;
}