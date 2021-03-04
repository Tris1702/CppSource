#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n,m,res=0;
    cin>>n>>m;
    if (n>m) swap(n,m);
    for(long long i=5;i<=n+m;i+=5)
    {
        if (i<=n)
        {
            res+=i-1;
        }
        if (n<i&&i<=m)
        {
            res+=n;
        }
        if (i>m)
        {
            res+=n-(i-m)+1;
        }
    }
    cout<<res;
	return 0;
}
