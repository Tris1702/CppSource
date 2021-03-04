#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int tcs(int a)
{
    int dem=0;
    while (a>0)
    {
        dem+=a%10;
        a/=10;
    }
    return dem;
}
bool kt(int n)
{
    if (n%400==0) return 1;
    if (n%4==0&&n%100!=0) return 1;
    return 0;
}
int main()
{
    int a[13]={},n,res=0;
    cin>>n;
    a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
    a[4]=a[6]=a[9]=a[11]=30;
    if (kt(n)) a[2]=29; else a[2]=28;
    for(int i=1;i<=12;i++)
        for(int j=1;j<=a[i];j++)
            res+=tcs(j)+tcs(i)+tcs(n);
	cout<<res;
	return 0;
}
