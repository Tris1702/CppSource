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
        int n,d;
        cin>>n>>d;
        int a[n+1]={};
        for(int i=1;i<=n;i++) cin>>a[i];
        d%=n;
        if (d!=0)
        {
            for(int i=d+1;i<=n;i++) cout<<a[i]<<' ';
            for(int i=1;i<=d;i++) cout<<a[i]<<' ';
        }
        else for(int i=1;i<=n;i++) cout<<a[i]<<' ';
        cout<<endl;
    }
	return 0;
}
