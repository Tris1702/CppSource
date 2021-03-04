#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int du=n%7,tmp=(n/7)*2;
    if (du==0) cout<<tmp<<' '<<tmp;
    else
    {
        if (du==1) cout<<tmp<<' '<<tmp+1;
        if (du==6) cout<<tmp+1<<' '<<tmp+2;
        if (du!=1&&du!=6) cout<<tmp<<' '<<tmp+2;
    }
	return 0;
}
