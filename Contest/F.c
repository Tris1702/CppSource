#include <stdio.h>
#include <math.h>
int q=1e9+7;
int poww(int a,int k)
{
    long long res=1;
    for(int i=1;i<=k;i++)
        res=(res*a)%q;
    return res;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int res=1;
    for(int i=2;i<=n;i++)
    {
        int tinh=poww(i,k);
        res=res%q+tinh%q;
    }
    printf("%d",res);
    return 0;
}
