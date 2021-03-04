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
    cin>>s;
    int F[s.length()][s.length()]={};
    FORT(len,1,s.length()+1)
        FORT(i,0,s.length()-len+1)
        {
            int j=i+len-1;
            if (len==1)
            {
                F[i][j]=1;
                continue;
            }
            if (len==2)
            {
                F[i][j]=1+(s[i]==s[j]);
                continue;
            }
            F[i][j]=max(F[i+1][j],F[i][j-1]);
            if (s[i]==s[j]) F[i][j]=max(F[i][j],F[i+1][j-1]+2);
        }
    cout<<s.length()-F[0][s.length()-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}