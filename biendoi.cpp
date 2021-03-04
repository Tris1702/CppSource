#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool kt(int a,int b)
{
    if (a==2&&b>3) return 1;
    if (a==3&&b>3) return 1;
    if (a==1&&b>1) return 1;
    return 0;
}
void solve()
{
    long long a,b;
    cin>>a>>b;
    if (kt(a,b)) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}