#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long ab,bc,ac;
        cin>>ab>>bc>>ac;
        long long a=sqrt((ab*ac)/bc);
        long long b=sqrt((ac*bc)/ab);
        long long c=sqrt((bc*ab)/ac);
        cout<<4*(a+b+c)<<endl;
    }
	return 0;
}
