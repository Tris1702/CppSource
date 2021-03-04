#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    long long x;
    cin>>x;
    if (x<=14) 
    {
        cout<<"NO\n";
        return;
    }
    x%=14;
    if (x>=1&&x<=6) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}