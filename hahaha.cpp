#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<string> res;
int n;
void sinh(int spt,string s)
{
    if (spt>n)
    {
        res.push_back(s);
        return;
    }
    for(char i='0';i<='1';i++)
    {
        sinh(spt+1,s+i);
    }
}
bool check (string s)
{
    if (s[0] =='0') return 0; //0 = A, 1 = H
    if (s[s.length()-1]=='1') return 0;
    for(int i = 1; i <s.length(); i++)
    {
        if (s[i] == s[i-1] && s[i] == '1') return 0;
    }
    return 1;
}
string doi(string s)
{
    string tmp = "";
    for(char i: s)
        if (i == '0') tmp = tmp+'A';
        else tmp = tmp+ 'H';
    return tmp;
}
void solve()
{
    cin >> n;
    res.clear();
    sinh(1, "");
    for(string i: res)
    {
        if (check(i)) cout << doi(i)<<endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}