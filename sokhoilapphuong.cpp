#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<long long> F;
void prepare()
{
    long long lim=1, tmp;
    F.push_back(1);
    do
    {
        tmp=lim*lim*lim;
        F.push_back(tmp);
        lim++;
    } while (tmp<=1e6);
}
bool change(long long a,long long b)
{
    while (b>0)
    {
        int tmp=b%10,tam;
        if (a==0) return 0;
        do
        {
            tam=a%10;
            a/=10;
        }  while (a>0 && tam!=tmp);
        if (tam==tmp) b/=10;
    }
    if (b>0) return 0;
    return 1;
}
void solve()
{
    long long n,luu=-1;
    cin>>n;
    for(int i=F.size()-1;i>=0;i--)
    {
        if (F[i]==n) 
        {
            luu=F[i];
            break;
        }
        if (F[i]<n) 
        {
            bool tmp=change(n,F[i]);
            if (tmp) 
            {
                luu=F[i];
                break;
            }
        }
    }
    cout<<luu<<endl;
}
int main()
{
    prepare();
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}