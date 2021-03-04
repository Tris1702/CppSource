#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> a;
int n;
vector<bool> dd;
void in(string s)
{
    FORT(i,0,s.length())
    {
        cout<<a[(int) (s[i]-'0')];
    }
    cout<<' ';
}
void sinh(int spt,string so)
{
    if (spt==n)
    {
        in(so);
        return;
    }
    FORT(i,0,n)
        if (!dd[i])
    {
        dd[i]=1;
        sinh(spt+1,so+(char)(i+'0'));
        dd[i]=0;
    }
}
void solve()
{
    a.clear();
    dd.clear();
    cin>>n;
    dd.resize(n,0);
    FORD(i,n,0) a.push_back(i+1);
    sinh(0,"");
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}