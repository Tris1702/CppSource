#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    long long n,k,a[100001]={};
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a+1,a+n);
    long long res=a[0];
    for(int i=n-1;i>0;i--)
    {
        if (k>0)
        {
            res+=a[i];
            k--;
        }
        else res-=a[i];
    }
    cout<<res;
	return 0;
}
