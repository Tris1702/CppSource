#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    s1='.'+s1;
    s2=','+s2;
    int n=s1.length();
    int m=s2.length();
    vector<vector<int> >F(n+1,vector<int> (m+1));
    FORT(i,0,n) F[i][0]=0;
    FORT(i,0,m) F[0][i]=0;
    FORT(i,1,n)
        FORT(j,1,m)
            if (s1[i]==s2[j]) F[i][j]=F[i-1][j-1]+1;
            else F[i][j]=max(F[i-1][j],F[i][j-1]);
    cout<<F[n-1][m-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}