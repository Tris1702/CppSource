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
        long long n,k;
        cin>>n>>k;
        long long x=sqrt(k*2);
        if (x*(x+1)==k*2)
        {
            if (n==x) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else cout<<0<<endl;
    }
	return 0;
}
