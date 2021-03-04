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
	string s1, s2;
	unsigned long long num1 = 0, num2 = 0;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++)
		if (s1[i] == '1') num1 = num1 + (1<<s1.length()-1-i);
	for(int i = 0; i < s2.length(); i++)
		if (s2[i] == '1') num2 = num2 + (1<<s2.length()-1-i);

	cout << num1*num2 << endl;
}
int main()
{
	int t=1;
	cin>>t;
	while (t--) solve();
}