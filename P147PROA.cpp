#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long ab,bc,ac;
    cin>>ab>>bc>>ac;
    cout<<(sqrt((ab*bc)/ac)+sqrt((bc*ac)/ab)+sqrt((ac*ab)/bc))*4;
	return 0;
}
