#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
typedef long long ll;
void prepare()
{

}
void solve()
{
	int k;
	cin >> k;
	string s; 
	cin >> s;
	int dd[256]={};
	priority_queue<int> q;
	for(char c: s)
	{
		dd[c]++;
	}
	for(int i = 0; i < 256; i++)
		q.push(dd[i]);
	while (k--)
	{
		if (!q.empty())
		{
			int so = q.top();
			q.pop();
			so--;
			q.push(so);
		}
	}
	ll res = 0;
	while (!q.empty())
	{
		int so = q.top();
		q.pop();
		res += 1LL * so * so;
	}
	cout<<res<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}