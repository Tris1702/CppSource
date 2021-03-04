#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int c,m;
    cin>>c>>m;
    if (c==0)
    {
        cout<<"Second\n";
        return;
    }
    if (m>=c)
    {
        cout<<"First\n";
        return;
    }
    if (c%(m+1)==0) 
    {
        cout<<"Second\n";
        return;
    }
    cout<<"First\n";
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}