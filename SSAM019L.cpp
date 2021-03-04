#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,h;
        cin>>n>>h;
        double S=h*1.0,Smp=S/n;
        for(int i=1;i<n;i++)
        {
            double Stmp=Smp*i;
            printf("%.6lf ",sqrt(Stmp/S)*h);
        }
        printf("\n");
    }
	return 0;
}
