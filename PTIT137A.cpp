#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[5]={};
bool kt()
{
    for(int i=2;i<=4;i++)
        if (a[i]!=a[i-1]) return 0;
    return 1;
}
void bd()
{
    int luu=a[1];
    for(int k=1;k<=4;k++)
        if (k<4) a[k]=fabs(a[k]-a[k+1]);
        else a[k]=fabs(a[k]-luu);
}
int main()
{
    while (1)
    {
        for(int i=1;i<=4;i++) cin>>a[i];
        if (a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0) return 0;
        int j=0;
        while (kt()==0)
        {
            j++;
            bd();
        }
        cout<<j<<endl;
    }
	return 0;
}
