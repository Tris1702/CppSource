#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[100001]={};
    long long tong=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        if (tong%2!=0) break;
        else
        {
            if (a[i]%2!=0) tong-=a[i];
        }
    if (tong%2==0) cout<<0;
    else cout<<tong;
	return 0;
}
