#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long l0,r0,l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    l0=max(l1,l2);
    r0=min(r1,r2);
    if (l0>r0) cout<<0;
    else
        if (k>=l0&&k<=r0) cout<<r0-l0;
        else cout<<r0-l0+1;
	return 0;
}
