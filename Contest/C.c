#include <stdio.h>

long long minn(long long a,long long b)
{
    if (a<b) return a;
    return b;
}
int main()
{
    long long n,k,res=1,res1,res2,a,b;
    scanf("%lld%lld",&n,&k);
    if (n*2<k)
    {
        printf("0");
        return 0;
    }
    a=k/2;
    b=k-a;
    if (a==b)
    {
        a--;
        b++;
    }
    res1=n-b;
    res2=a-1;
    res+=minn(res1,res2);
    printf("%lld",res);
    return 0;
}
