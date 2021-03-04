#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n;
    while (cin>>n)
    {
        if (n==0) return 0;
        long long res=1;
        while (n!=1)
        {
            if (n%2==0) n/=2;
            else n=3*n+1;
            res++;
        }
        cout<<res<<endl;
    }
	return 0;
}
