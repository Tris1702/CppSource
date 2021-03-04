#include <stdio.h>
#include <stdlib.h>
int uc(int a,int b)
{
    while (a>0)
    {
        if (a<b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
int main()
{
    int a,b,ucln;
    long long res;
    scanf("%d%d",&a,&b);
    ucln=uc(a,b);
    res=(long long)a/ucln*b;
    printf("%lld",res);
    return 0;
}
