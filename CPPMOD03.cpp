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
        unsigned long long res=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) res=res+i%k;
        cout<<res<<endl;
    }
	return 0;
}
