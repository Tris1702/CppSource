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
void ins(vector<int> &b, int vt, int num)
{
	if (vt == b.size())
	{
		b.push_back(num);
		return;
	}
	int tmp = num;
	for(int i = vt; i < b.size(); i++)
	{
		int temp = b[i];
		b[i] = tmp;
		tmp = temp;
	}
	b.push_back(tmp);
}
void solve()
{
	int n, dem = 0;
	cin >> n;
	vector <int> a(n), b;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++)
	{
		int vt = b.size();
		for(int j = 0; j < b.size(); j++)
			if (a[i] < b[j]) 
			{
				vt = j;
				break;
			}
		ins(b, vt, a[i]);
		cout << "Buoc " << dem <<":";
		for(int j = 0; j < b.size(); j++)
		{
			cout << ' ' << b[j] ;
		}
		cout << endl;
		dem++;
	}
}
int main()
{
	int t=1;
	//cin>>t;
	while (t--) solve();
}