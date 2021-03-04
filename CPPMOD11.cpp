#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

long long tinh(long long a,long long b, long long c)
{
	long long res=0,i=a;
	for(;b>0;b>>=1)
	{
		if (b&1) res=(res+i)%c;
		i=(i*2)%c;
	}
	return res;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
		cout<<tinh(a,b,c)<<endl;
    }
	return 0;
}
