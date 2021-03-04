#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,cs=0;
    cin>>n;
    (n%4)? cs=n/4+1 : cs=n/4;
    FORT(i,0,n-cs) cout<<9;
    FORT(i,0,cs) cout<<8;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}