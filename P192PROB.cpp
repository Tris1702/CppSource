#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    while(x+1>y||x+2>z) x--;
    cout<<x+x+1+x+2;
	return 0;
}
