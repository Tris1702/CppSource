#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long res=0,d1,d2,d3;
    cin>>d1>>d2>>d3;
    res=min(min(min(d1*2+d2*2,d1+d2+d3),d1*2+d3*2),d2*2+d3*2);
    cout<<res;
	return 0;
}
