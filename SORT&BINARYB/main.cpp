#include <iostream>
#include<stdio.h>

using namespace std;
int a[1001]={},n,tt=0;
void qs(int d,int c)
{
    if (d>=c) return;

    printf("%d\n",tt+1);
    tt++;
    for(int i=1;i<=n;i++) printf("%d ",a[i]);
    printf("\n");

    int key=a[(d+c)/2],i=d,j=c;
    while (i<=j)
    {
        while (a[i]<key) i++;
        while (a[j]>key) j--;
        if (i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(i,c);
    qs(d,j);
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    qs(1,n);
    return 0;
}
