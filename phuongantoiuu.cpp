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
vector<vat> x;
vector<vector<int> > F;
string res;
void trace(int n, int v)
{
    if (n == 0) return;
    if (F[n][v] == F[n-1][v]) trace(n-1, v);
    else 
    {
        trace(n-1, v-x[n].kl);
        res[n-1]='1';
    }
}
void solve()
{
    int v,n;
    cin>>n>>v;
    F.resize((n+1), vector<int> (v+1,0));
    x.resize(n+1);
    FORT(i,1,n+1) 
    {
        res=res+"0";
        cin>>x[i].gt;
    }
    FORT(i,1,n+1) cin>>x[i].kl;
    FORT(i,0,n+1) F[i][0]=0;
    FORT(i,0,v+1) F[0][i]=0;
    FORT(i,1,n+1)
        FORT(j,1,v+1)
        {
            if (j<x[i].kl) F[i][j]=F[i-1][j];
            else F[i][j]=max(F[i-1][j],F[i-1][j-x[i].kl]+x[i].gt);
        }
    cout<<F[n][v]<<endl;
    trace(n,v);
    for(char c: res) cout << c <<' ';
}
int main()
{
    int T=1;
    // cin>>T;
    FORT(t,0,T) solve();
    return 0;
}