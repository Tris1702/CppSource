#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
int bd1(string &s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
        if (s[i]=='1') res++;
    return res;
}
int bd2(string &s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
        if (s[i]=='0') res++;
    return res;
}
int bd3(string &s)
{
    int res=s.length();
    for(int i=0;i<s.length();i++)
    {
        int dem=0;
        for(int j=0;j<i;j++)
            if (s[j]=='0') dem++;
        for(int j=i;j<s.length();j++)
            if (s[j]=='1') dem++;
        res=min(res,dem);
    }
    return res;
}
int bd4(string &s)
{
    int res=s.length();
    for(int i=0;i<s.length();i++)
    {
        int dem=0;
        for(int j=0;j<i;j++)
            if (s[j]=='1') dem++;
        for(int j=i;j<s.length();j++)
            if (s[j]=='0') dem++;
        res=min(res,dem);
    }
    return res;
}
void solve()
{
    string s;
    cin>>s;
    int res=s.length();
    res=min(res,bd1(s));
    res=min(res,bd2(s));
    res=min(res,bd3(s));
    res=min(res,bd4(s));
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}