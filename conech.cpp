#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<unsigned long long> f(55,0);
void prepare()
{
    f[1]=f[2]=f[3]=1;
    FORT(i,2,51)
    {
        if (i-1>=0) f[i]+=f[i-1];
        if (i-2>=0) f[i]+=f[i-2];
        if (i-3>=0) f[i]+=f[i-3];
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<f[n]<<endl;
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}