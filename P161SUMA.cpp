#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,res=0;
    cin>>a>>b;
    while (b!=0)
    {
        if (a>b) swap(a,b);
        res+=b/a;
        b%=a;
    }
    cout<<res;
	return 0;
}
