#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<int> a;
void show()
{
	if (a.size() == 0)
	{
		cout<<"empty"<<endl;
		return;
	}
	for(int i:a) cout<<i<<' ';
	cout<<endl;
}
void push(int so)
{
	a.push_back(so);
}
void pop()
{
	a.pop_back();
}
void solve()
{
	string s;
	while (cin >> s)
	{
		if ( s == "show") show();
		else
			if (s == "pop") pop();
			else
			{
				int so;
				cin >> so;
				push(so);
			}
	}
}
int main()
{
	int t=1;
	// cin>>t;
	while (t--) solve();
}