#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n,k,sole;
    cin>>n>>k;
    if (n%2!=0)
        sole=(n+1)/2;
    else
        sole=n/2;
    if (k<=sole) cout<<2*k-1;
    else
    {
        k-=sole;
        cout<<2*k;
    }
	return 0;
}
