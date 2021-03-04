#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
long long ucln(long long a,long long b)
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
        long long n;
        cin>>n;
        long long res=1;
        for(long long i=2;i<=n;i++)
        {
            res=(res*i)/ucln(res,i);
        }
        cout<<res<<endl;
    }
	return 0;
}
