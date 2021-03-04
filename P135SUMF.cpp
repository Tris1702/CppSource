#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,tong=0;
    cin>>n;
    for(int i=0;i<=n;i++)
        for(int j=i;j<=n;j++) tong+=i+j;
    cout<<tong;
	return 0;
}
