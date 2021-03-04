#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long mod=1e9+7;
long long poww(long long a,long long b)
{
    long long res=1,tmp=a;
    for(long long i=b;i;i>>=1)
    {
        if (i&1) res=(res*tmp)%mod;
        tmp=(tmp*tmp)%mod;
    }
    return res;
}
int main()
{
    long long a,b;
    while (1)
    {
        cin>>a>>b;
        if (a==0&&b==0) return 0;
        cout<<poww(a,b)<<endl;
    }
	return 0;
}
