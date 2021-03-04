#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    while (1)
    {
        //Cau hoi tim tong cua 2 so 
        int a= 1+ rand()%(100 -1 +1);
        int b= 1+ rand() % (100 -1 +1);
        printf("\n%d + %d = ?....",a,b);
        int ans1;
        scanf("%d",&ans1);
        if (ans1==a+b) printf("Correct!");
        else printf("Wrong!");
        printf("\n");

        printf("Ban co muon tiep tuc? [1/0]...\n");
        int kt;
        scanf("%d",&kt);
        if (kt==0) break;
    }
    return 0;
}