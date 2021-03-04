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
        long long n,a[101]={};
        long long res=-1e18;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++)
            {
                long long tich=1;
                for(int k=i;k<=j;k++) tich*=a[k];
                res=max(res,tich);
            }
        cout<<res<<endl;
    }
	return 0;
}
