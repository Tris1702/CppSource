#include <stdio.h>
#include <math.h>
int m,n,a[200005]={};
long long tong[200005]={},x[200005]={};
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if (i>1) tong[i]=tong[i-1]+a[i];
        else tong[i]=a[i];
    }
    int tmp=0,tmp2=0;
    for(int i=1;i<=m;i++)
    {
        tmp+=a[i];
        printf("%d ",tmp);
    }
    for (int i=m+1;i<=n;i++)
    {
        int res=0;
        tmp+=a[i];
        if ((i-1)%m==0) tmp+=tong[i-1];
        res=tmp-(tong[i-1]-tong[i%m]);
        printf("%d ",res);

        /*if (i>m)
        {
            x[i]=x[i-1]+a[i]+a[i-m];
            if (i>2*m) x[i]+=a[i-2*m];
            if ((i-1)%m==0&&i>2*m) x[i]+=tong[i-2*m-1];
        }
        else
        {
            x[i]=x[i-1]+a[i];
            tmp=tmp+a[i];
        }
        printf("%d ",x[i]);*/
    }
    //for(int i=1;i<=n;i++)
    return 0;
}
