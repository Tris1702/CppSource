#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    string s1,s2,s3;
    int a,b,c;
    cin>>a>>b>>c;
    cin>>s1>>s2>>s3;
    s1='.'+s1;
    s2=','+s2;
    s3='/'+s3;
    a++;
    b++;
    c++;
    int F[a+1][b+1][c+1]={};
    FORT(i,0,a) F[i][0][0]=0;
    FORT(i,0,b) F[0][i][0]=0;
    FORT(i,0,c) F[0][0][i]=0;
    FORT(i,1,a)
        FORT(j,1,b)
            FORT(k,0,c)
                if (s1[i]==s2[j]&&s2[j]==s3[k]) F[i][j][k]=F[i-1][j-1][k-1]+1;
                else F[i][j][k]=max(F[i-1][j][k],max(F[i][j-1][k],F[i][j][k-1]));
    cout<<F[a-1][b-1][c-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}