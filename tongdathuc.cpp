#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector<int> x;
bool isNum(char c)
{
    return (c >='0' && c <='9');
}
void trich(string s)
{
    int i = 0;
    while (i <s.length())
    {
        int heso = 0;
        while (i < s.length() && isNum(s[i])) 
        {
            heso = heso*10 + (s[i]-'0');
            i++;
        }
        i+=3;
        int somu = 0;
        while (i < s.length() && isNum(s[i])) 
        {
            somu = somu*10 + (s[i]-'0');
            i++;
        }
        x[somu] += heso;
        while (i<s.length() && (s[i] ==' ' || s[i] =='+')) i++;
    }
}
void in()
{
    string res ="";
    for(int i = x.size()-1; i >=0; i--)
    {
        if (x[i] > 0)
        {
            res = res + to_string(x[i]) +"*x^"+ to_string(i)+" + ";
        }
    }
    res.erase(res.length()-3, 3);
    cout << res <<endl;
}
void solve()
{
    x.clear();
    x.resize(10005,0);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    // cout << s1 <<endl<<s2;
    trich(s1);
    trich(s2);
    in();
}
int main()
{
    int t=1;
    cin>>t;
    cin.ignore();
    while (t--) solve();
}