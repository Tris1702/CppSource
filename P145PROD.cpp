#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int r;
    double s1=1,s2=1,pi=atan(1)*4;
    cin>>r;
    s1=s1*pi*r*r;
    s2=s2*2*r*r;
    printf("%.6lf\n%.6lf",s1,s2);
	return 0;
}
