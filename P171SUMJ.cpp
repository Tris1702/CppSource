#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if (a==0)
    {
        if (b==0)
        {
            if (c==0) printf("-1");
            else printf("0");
        }
        else
        {
            double res=-1.0*(double)c/(double)b;
            printf("1\n%.5lf",res);
        }
    }
    else
    {
        long long delt=b*b-4*a*c;
        if (delt>0)
        {
            double res1=(-1.0*(double)b-sqrt(delt))/(2.0*(double)a);
            double res2=(-1.0*(double)b+sqrt(delt))/(2.0*(double)a);
            if (res1>res2) swap(res1,res2);
            printf("2\n%.5lf\n%.5lf",res1,res2);
        }
        if (delt==0)
        {
            double res=-1.0*(double)b/(2.0*(double)a);
            printf("1\n%.5lf",res);
        }
        if (delt<0) printf("0");
    }
	return 0;
}
