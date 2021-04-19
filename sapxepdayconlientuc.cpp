#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
void prepare()
{

}
void solve()
{
	int n;
	cin>> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin>>a[i];
	vector<int> b = a;
	sort(b.begin(),b.end());
	int d = 0, c = n-1;
	while (d < n && b[d] == a[d]) d++;
	while (c >= 0 && b[c] == a[c]) c--;
	if (d < c) cout << d+1 <<' '<< c+1<<endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}