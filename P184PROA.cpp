#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if (n-a<=b) cout<<n-a;
    else cout<<(n-a)-(n-a-b)+1;
	return 0;
}
