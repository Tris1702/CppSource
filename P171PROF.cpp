#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[100001]={},tv=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    long long cho=0;
    for(int i=1;i<=n;i++)
    {
        if (cho<=a[i]) cho+=a[i];
        else tv++;
    }
    cout<<n-tv;
	return 0;
}
