#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int mod=1e9;
int poww(int n)
{
    long long tmp=1378,res=1;
    for(int i=n;i;i>>=1)
    {
        if (i&1) res=(res*tmp)%mod;
        tmp=(tmp*tmp)%mod;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<poww(n)%10;
	return 0;
}
