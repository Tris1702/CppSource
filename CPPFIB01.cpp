b#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T,mod=1e9+7;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int f1=0, f2=1;
        for(int i=1;i<=n;i++)
        {
            int tmp=f2;
            f2=(1LL*f1+f2)%mod;
            f1=tmp;
        }
        cout<<f1<<endl;
    }
	return 0;
}
