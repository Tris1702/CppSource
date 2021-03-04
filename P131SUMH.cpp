#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(fabs(b-a)-1,fabs(c-b)-1);
	return 0;
}
