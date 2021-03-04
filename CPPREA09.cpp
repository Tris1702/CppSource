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
        int n;
        long long a[100001]={};
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<a[1]*a[2]<<' ';
        for(int i=2;i<n;i++) cout<<a[i-1]*a[i+1]<<' ';
        cout<<a[n]*a[n-1];
        cout<<endl;
    }
	return 0;
}
