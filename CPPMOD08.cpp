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
        long long b,p;
        cin>>b>>p;
        long long tmp1=0,tmp2=1,res=0;
        while (sqrt(tmp2)<=b)
        {
            long long x=sqrt(tmp2);
            if (x*x==tmp2) res++;
            tmp1++;
            tmp2=tmp1*p+1;
        }
        cout<<res<<endl;
    }
	return 0;
}
