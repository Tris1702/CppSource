#include<stdio.h>

int main(){
    //Nhap 1 mang 2 chieu gom h hang, c cot, in ra hang co tong lon nhat
    /*
    VD:
    Input:
    3 4
    1 2 3 4
    2 3 1 5
    6 2 0 1
    

    Output:
    1
    */

    int a[1000][1000]={};
    int h, c, res = -1e9, hang = 0;
    scanf("%d %d", &h, &c);

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < h; i++)
    {
        int tong = 0;
        for(int j = 0; j < c; j++) tong = tong + a[i][j];
        if (tong > res)
        {
            res = tong;
            hang = i;
        }
    }
    printf("%d", hang);
}