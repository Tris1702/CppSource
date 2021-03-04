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
	if (s.length()>=2&&s[s.length()-2]=='8'&&s[s.length()-1]=='6') cout<<1<<endl;
	else cout<<0<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	FORT(t,0,T) solve();
	return 0;
}