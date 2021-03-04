#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
void solve()
{
    string s;
    cin>>s;
    LL res=0;
    for(int i=1;i<s.length();i++)
    {
        int so=(s[i-1]-'0')*10+(s[i]-'0');
        if (so%4==0) res+=i;
        if ((s[i]-'0')%4==0) res++;
    }
    if ((s[0]-'0')%4==0) res++;
    cout<<res<<endl;
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}