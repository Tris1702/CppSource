#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
int n, k;
vector<int> a;
bool check;
void prepare()
{

}
void Try(int vt, int sum, string s)
{
	if (sum > k) return;
	if (vt==n)
	{
		if(sum == k)
		{
			bool ok = 0;
			cout << '[';
			for(int i = 0; i < s.length(); i++)
			{
				if (s[i] == '1') 
				{
					if(ok) cout<<' ';
					cout << a[i];
					ok=1;
				}
				else continue;
			}
			cout<<"] ";
			check = 1;
		}
		return;
	}
	for(char i = '1'; i >= '0'; i--)
	{
		if (i == '0') Try(vt+1, sum, s + i);
		else Try(vt+1, sum + a[vt], s + i);
	}

}
void solve()
{
	cin >> n >> k;
	a.resize(n);
	check = 0;
	for(int i = 0; i < n; i++) cin >> a[i]; 
	sort(a.begin(),a.end());
	Try(0,0,"");
	if(check == 0) cout<<-1;
	cout<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}