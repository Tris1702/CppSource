#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
struct vat
{
    int kl,gt;
};
void solve()
{
    int v,n;
    cin>>n>>v;
    vat x[n+1]={};
    int F[n+1][v+1]={};
    FORT(i,1,n+1) cin>>x[i].kl;
    FORT(i,1,n+1) cin>>x[i].gt;
    FORT(i,0,n+1) F[i][0]=0;
    FORT(i,0,v+1) F[0][i]=0;
    FORT(i,1,n+1)
        FORT(j,1,v+1)
        {
            if (j<x[i].kl) F[i][j]=F[i-1][j];
            else F[i][j]=max(F[i-1][j],F[i-1][j-x[i].kl]+x[i].gt);
        }
    cout<<F[n][v]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}