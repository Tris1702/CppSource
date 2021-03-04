#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string s;
vector<string> F;
void sinh(int n)
{
    int c=1<<n;
    FORT(i,1,c)
    {
        string tmp="";
        int vt=s.length()-1;
        for(int j=i;j;j>>=1,vt--)
            if (j&1) tmp=s[vt]+tmp;
        F.push_back(tmp);
    }
}
void solve()
{
    int n;
    s="";
    cin>>n>>s;
    F.clear();
    sinh(n);
    sort(F.begin(),F.end());
    cout<<F[0]<<' ';
    FORT(i,1,F.size()) 
        if (F[i]!=F[i-1]) cout<<F[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}