#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n,tong=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        cin>>tmp;
        tong+=tmp;
    }
    double res=(double)tong/n;
    printf("%.12lf",res);
	return 0;
}
