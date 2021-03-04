#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
#define LL long long
using namespace std;
void solve()
{
    LL res=0;
    string s;
    cin>>s;
    int n=s.length();
    vector<LL> f(n+5,0);
    FORT(i,0,n)
    {
        int c=s[i]-'0';
        for(int j=i+1;j>=1;j--)
        {
            f[j]=f[j-1]*10+c;
            res+=f[j];
        }
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