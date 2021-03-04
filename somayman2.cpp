#include<bits/stdc++.h>

using namespace std;

vector<int> dd;
int tcs(int a)
{
    int res=0;
    while (a>0)
    {
        res+=a%10;
        a/=10;
    }
    return res;
}
void solve()
{
    string s;
    cin>>s;
    int so=0;
    for(int i=0;i<s.length();i++) so+=s[i]-'0';
    while (so>10)
    {
        so=tcs(so);
    }
    cout<<(so==9)<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}