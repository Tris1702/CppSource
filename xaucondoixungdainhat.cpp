#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    string s;
    int res=1;
    cin>>s;
    int n=s.length();
    vector<vector<bool> > F(n,vector<bool> (n));
    FORT(i,0,n) F[i][i]=1;
    FORT(dd,1,n)
        FORT(i,0,n-dd)
        {
            int j=i+dd;
            F[i][j]=((i+1>j-1||F[i+1][j-1]) && s[i]==s[j]);
            if (F[i][j]) res=dd+1;
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