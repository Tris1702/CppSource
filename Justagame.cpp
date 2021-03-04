#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> F;
void prepare()
{
    int i=2;
    while (i<1e9)
    {
        i<<=1;
        F.push_back(i);
    }
}
bool nt(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
void solve()
{
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<"Shin\n";
        return;
    }
    if (n==2||n==3||n%2==1)
    {
        cout<<"Lin\n";
        return;
    }
    FORD(i,F.size(),0)
        if (n%F[i]==0)
        {
            if (n/F[i]==1) cout<<"Shin\n";
            else cout<<"Lin\n";
            return;
        } 
    if (nt(n/2)) cout<<"Shin\n";
    else cout<<"Lin\n";
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}