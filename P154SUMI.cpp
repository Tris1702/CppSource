#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n,res=0;
    cin>>n;
    for(long long a=1;a<=n;a++)
        for(long long b=a+1;b<=n;b++)
    {
        long long c=a*a+b*b;
        long long x=sqrt(c);
        if (x*x==c)
        {
            if (c<=n*n) res++;
            else break;
        }
    }
    cout<<res;
	return 0;
}
