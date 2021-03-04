#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n,b[101]={},a[101]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
    a[1]=b[1];
    for(int i=2;i<=n;i++) a[i]=b[i]*i-b[i-1]*(i-1);
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	return 0;
}
