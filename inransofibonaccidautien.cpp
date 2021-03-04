#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    unsigned long long f1=0,f2=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<f1<<' ';
        unsigned long long tmp=f2;
        f2=f1+f2;
        f1=tmp;
    }
	return 0;
}
