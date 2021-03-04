#include <stdio.h>

int main()
{
    int tanso[100005]={},n,so,chiso[100005]={},vt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&so);
        if (tanso[so]==0)
        {
            vt++;
            chiso[vt]=so;
        }
        tanso[so]++;
    }
    for(int i=1;i<=vt;i++) printf("%d %d\n",chiso[i],tanso[chiso[i]]);
    return 0;
}
