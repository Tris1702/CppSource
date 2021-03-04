#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long m,n,a;
    cin>>n>>m>>a;
    long long x=n/a,y=m/a;
    if (x*a<n) x++;
    if (y*a<m) y++;
    cout<<x*y;
	return 0;
}
