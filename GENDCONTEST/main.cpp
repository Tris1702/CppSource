#include <iostream>
#include<vector>
using namespace std;
vector<int> F(1000005);
int mod=1e9+7,maxx=1e6;
void sang()
{
    for(int i=1;i<=maxx;i++) F[i]=1;
    for(int i=2;i<=maxx;i++)
        //if (F[i]==1)
        {
            for(long long j=(long long)i*i;j<=maxx;j+=i)
            {
                F[j]=(F[j]%mod+i%mod)%mod;
                if (i*i!=j) F[j]=(F[j]%mod+(j/i)%mod)%mod;
            }
        }
     for(int i=2;i<=maxx;i++) F[i]=(F[i]%mod+i%mod)%mod;
}
int main()
{
    sang();
    int l,r;
    long long res=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        res=(res%mod+F[i]%mod)%mod;
    }
    cout<<res;
    return 0;
}
