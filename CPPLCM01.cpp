#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long gcd(long long a,long long b)
{
    while (a>0)
    {
        if (a<b)
        {
            long long tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long a,b;
        cin>>a>>b;
        long long c=gcd(a,b);
        cout<<a/c*b<<' '<<c<<endl;
    }
	return 0;
}
