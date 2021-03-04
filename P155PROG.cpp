#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a[101]={},p[101]={};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        a[so]=i;
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	return 0;
}
