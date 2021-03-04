#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int F[500005][300]={};
void solve()
{
    string s;
    cin>>s;
    s='#'+s;
    FORT(i,1,s.length()) F[i][s[i]]++;
    FORT(i,1,s.length())
        FORT(j,0,300) F[i][j]+=F[i-1][j];
    int Q;
    cin>>Q;
    FORT(q,0,Q)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool check=1;
        FORT(i,0,300)
            if ((F[b][i]-F[a-1][i])!=(F[d][i]-F[c-1][i])) 
            {
                check=0;
                cout<<"NO";
                break;
            }
        if (check) cout<<"YES";
        cout<<endl;
    }
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}