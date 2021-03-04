#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long LL;
void solve()
{
    LL b,p,res=0;
    cin>>b>>p;
    for(LL x=1;x<p;x++)
    {
        if ((x*x)%p==1)
        {
            LL c=x+p*(b/p);
            if (c>b) c-=p;
            res+=((c-x)/p+1);
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}