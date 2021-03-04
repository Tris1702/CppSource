#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    n--;
    if (k%n==0) cout<<k/n-1+k<<' '<<k/n+k;
    else cout<<floor(k/n)+k<<' '<<floor(k/n)+k;
	return 0;
}
