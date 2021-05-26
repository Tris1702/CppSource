#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int n, sum = 0, res = 1e9;
vector<int> a;
vector<pair<int,int> > binary_code;
pair<int,int> countt(string s)
{
	int res1 = 0, res2 = 0;
	for(int i = 0; i < s.length(); i++) 
	{
		if (s[i] == '1') 
		{
			res1 += a[i];
			res2 += a[i+n];
		}
	}
	return mp(res1, res2);
}
void gen_binary_code(int spt,string s)
{
    if (spt>n)
    {
		binary_code.push_back(countt(s));
        return;
    }
    for(char i='0';i<='1';i++)
    {
        gen_binary_code(spt+1,s+i);
    }
}
void BS(int l, int r, int x)
{
	//this is not the version to find x, it is for finding (2*(x + binary_code[it]) - sum) min!
	if (l>r) return;
	int mid = (l+r)/2;
	int An = x + binary_code[mid].S;
	int Binh = sum - An;
	res = min(res, abs(Binh-An));
	if (An < Binh) BS(mid+1, r, x);
	else BS(l, mid-1, x);
}
void solve()
{
	for(int i = 0; i < binary_code.size(); i++)
	{
		int An = binary_code[i].F;
		BS(0, binary_code.size()-1, An);
	}
	cout << res << endl;
}
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.S < b. S;
}
int main()
{
	cin >> n;
	a.resize(n);
	for(int &i: a) 
	{
		cin >> i;
		sum += i;
	}
	n/=2;
	gen_binary_code(1, "");
	sort(binary_code.begin(), binary_code.end(), cmp);

	// for(int i =0; i < binary_code.size(); i++) cout << binary_code[i].F << ' '<<binary_code[i].S << endl;
	solve();
	return 0;
}
