#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void solve()
{
    int n,res=0;
    cin>>n;
    vector<int> F(n),a(n);
    FORT(i,0,n) cin>>a[i];
    FORT(i,0,n)
    {
        F[i]=1;
        FORT(j,0,i)
            if (a[j]<=a[i]) F[i]=max(F[i],F[j]+1); 
    }
    FORT(i,0,n) res=max(res,F[i]);
    cout<<n-res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}