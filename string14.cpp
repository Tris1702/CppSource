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
	cin.ignore();
	getline(cin,s);
	while (s[0]==' ') s.erase(0,1);
	while (s[s.length()-1]==' ') s.erase(s.length()-1,1);
	for(int i=1;i<s.length();i++)
		if (kt(s[i])&&!kt(s[i-1])) dem++;
	cout<<dem+1<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}