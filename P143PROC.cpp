#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,k,y,dd=0;
    cin>>y>>k>>n;
    for(int i=k;i<=n;i+=k)
        if (i>y)
        {
            dd=1;
            cout<<i-y<<' ';
        }
    if (dd==0) cout<<-1;
	return 0;
}
