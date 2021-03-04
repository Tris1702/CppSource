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
	vector<string> x;
	while (cin>>s)
	{
		//if (s==".") break;
		x.push_back(s);
	}
	for(int i=0;i<(int)x.size()-1;i++)
		if (x[i]!=x.back()) cout<<x[i]<<' ';
}
int main()
{
	solve();
	return 0;
}