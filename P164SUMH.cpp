#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,t=0,kt=0;
    cin>>n;
    int i;
    for(i=1;kt<=n;i++)
    {
        t+=i;
        kt+=t;
    }
    cout<<i-2;
	return 0;
}
