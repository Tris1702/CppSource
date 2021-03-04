#include <stdio.h>
#include <math.h>
int main()
{
    int xw,yw,xi,yi,r,res;
    long long dd=0;
    scanf("%d%d%d%d%d",&xi,&yi,&xw,&yw,&r);
    dd=dd+(xi-xw)*(xi-xw)+(yi-yw)*(yi-yw);
    dd=sqrt(dd);
    if (dd==0)
    {
        printf("0");
        return 0;
    }
    if (dd<r)
    {
        printf("2");
        return 0;
    }
    res=dd/(2*r);
    if (res*r*2<dd) res++;
    printf("%d",res);
    return 0;
}
