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
        long long x,y,p,tmp;
        cin>>x>>y>>p;
        tmp=x;
        for(long long i=2;i<=y;i++) x=(x*tmp)%p;
        cout<<x<<endl;
    }
	return 0;
}
