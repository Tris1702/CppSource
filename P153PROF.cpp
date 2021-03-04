#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[200001]={},b[200001]={},res=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    int i=n,j=n;
    while (i>0&&j>0)
    {
        if (b[j]>a[i])
        {
            j--;
            i--;
            res++;
        }
        if (b[j]<a[i]) i--;
    }
    cout<<res;
	return 0;
}
