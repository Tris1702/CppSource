#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
void solve()
{
    LL a,b,c;
    cin>>a>>b>>c;
    if (a<b)
    {
        c-=(b-a)+1;
        a=b+1;
    }
    if (c<0) 
    {
        cout<<0<<endl;
        return;
    }
    int vlmax=a+c;
    int vlmin=(a+b+c)/2+1;
    if (vlmin<a) vlmin=a;
    cout<<vlmax-vlmin+1<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}