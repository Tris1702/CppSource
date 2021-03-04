#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > a(n,vector<int> (m));
    FORT(i,0,n)
        FORT(j,0,m) cin>>a[i][j];
    FORT(j,1,m) a[0][j]+=a[0][j-1]; 
    FORT(i,1,n)
        FORT(j,0,m)
        {
            int tmp=a[i-1][j];
            if (j-1>=0) tmp=min(tmp,(min(a[i-1][j-1],a[i][j-1])));
            a[i][j]+=tmp;
        }
    cout<<a[n-1][m-1]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}