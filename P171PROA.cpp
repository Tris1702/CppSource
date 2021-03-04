#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long l,r,x;
    cin>>l>>r>>x;
    long long tmp=1,rr=r/x;
    bool kt=0;
    while (1)
    {
        if (tmp>=l)
        {
            cout<<tmp<<' ';
            kt=1;
        }
        if (r/x<tmp) break;
        tmp*=x;
    }
    if (kt==0) cout<<-1;
	return 0;
}
