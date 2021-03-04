#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int scs(long long a)
{
    int res=0;
    while (a>0)
    {
        res++;
        a/=10;
    }
    return res;
}
bool kt(int a)
{
    while (a>0)
    {
        if (a%10!=9) return 0;
        a/=10;
    }
    return 1;
}
void solve()
{
    long long A,B,res;
    cin>>A>>B;
    res=A;
    res*=scs(B)-1;
    if (kt(B)) res+=A;
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}