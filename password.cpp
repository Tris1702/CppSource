#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

long long gcd(long long a,long long b)
{
    while (a>0)
    {
        if (a<b) swap(a,b);
        a%=b;
    }
    return b;
}
long long lcd(long long a,long long b)
{
    long long res=a*b;
    return res/gcd(a,b);
}
void solve()
{
    int n,k;
    int m=1;
    cin>>n>>k;
    FORT(i,0,k) m*=10;
    cout<<lcd(m,n); 
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}