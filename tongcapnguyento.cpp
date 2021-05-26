#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair

using namespace std;
vector<int> F;
bool dd[(int)1e6+1]={};
void prepare()
{
	for(long long i = 2; i <=1e6; i++)
	{
		if (dd[i]==0)
		{
			for(long long j = i*i; j <= 1e6; j+= i) dd[j]= 1;
			F.push_back(i);
		}
	}
}
void solve()
{
	int n;
	cin >> n;
	for(int i: F)
	{
		vector<int> :: iterator it = lower_bound(F.begin(), F.end(), n-i);
		if (it == F.end()) continue;
		if (*it == n-i)
		{
			cout<< i<<' '<< *it<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}
int main()
{
	prepare();
	int t=1;
	cin>>t;
	while (t--) solve();
}