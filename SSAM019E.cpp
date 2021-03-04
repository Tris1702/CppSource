#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[35]={},tien,dem=0;
    cin>>n>>tien;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int i=n;
    while (i>0)
    {
        while (tien>=a[i])
        {
            dem++;
            tien-=a[i];
        }
        i--;
    }
    cout<<dem;
	return 0;
}
