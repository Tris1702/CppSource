#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long tcs(long long n)
{
    long long dem=0;
    while (n>0)
    {
        dem+=n%10;
        n/=10;
    }
    return dem;
}
int main()
{
    long long n,s1,s2=0;
    cin>>n;
    s1=tcs(n);
    for(long long i=2;i*i<=n;i++)
        while (n%i==0)
        {
            n/=i;
            s2+=tcs(i);
        }
    if (n>1) s2+=tcs(n);
    if (s1==s2) cout<<"YES"; else cout<<"NO";
	return 0;
}
