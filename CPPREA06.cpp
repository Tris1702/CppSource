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
        long long n,a[100001]={};
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n-1;i++)
            if (a[i+1]!=0&&a[i]==a[i+1])
            {
                a[i]*=2;
                a[i+1]=0;
            }
        int dem=0;
        for(int i=1;i<=n;i++)
            if (a[i]!=0)
        {
            cout<<a[i]<<' ';
            dem++;
        }
        for(int i=1;i<=(n-dem);i++) cout<<0<<' ';
        cout<<endl;
    }
	return 0;
}
