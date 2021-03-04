#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool num(char c)
{
    return (c>='0'&&c<='9');
}
void solve()
{
    string s;
    int res=0;
    cin>>s;
    int i=0;
    while (i<s.length())
    {
        while (i<s.length()&&!num(s[i])) i++;
        int tmp=0;
        while (i<s.length()&&num(s[i]))
        {
            tmp=tmp*10+(s[i]-'0');
            i++;
        }
        res=max(res,tmp);
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}