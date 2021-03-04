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
		cout<<"NONE"<<endl;
		return;
	}
	cout << a.back();
	cout<<endl;
}
void push(int so)
{
	a.push_back(so);
}
void pop()
{
	if (a.size()>0) a.pop_back();
}
void solve()
{
	string s;
	cin >> s;
	if ( s == "PRINT") show();
	else
		if (s == "POP") pop();
		else
		{
			int so;
			cin >> so;
			push(so);
		}
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}