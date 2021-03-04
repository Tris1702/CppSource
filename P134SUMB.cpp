#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long g,y,a,b;
    cin>>g>>y;
    long long S=(g/2)+2;
    long long P=y+g;
    long long m=fabs((-S-sqrt(S*S-4*P))/2);
    long long n=fabs((-S+sqrt(S*S-4*P))/2);
    cout<<min(m,n)<<' '<<max(m,n);
	return 0;
}
