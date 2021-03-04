#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    s=' '+s;
    n++;
    int F[n][n]={};
    FORT(i,1,n)
        FORT(j,1,n)
        {
            if (s[i]==s[j]&&i!=j) F[i][j]=F[i-1][j-1]+1;
            else F[i][j]=max(F[i-1][j],F[i][j-1]);
        }
    cout<<F[n-1][n-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}