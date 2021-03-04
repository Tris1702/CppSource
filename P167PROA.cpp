#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[5]={};
int kt(int vt)
{
    int d;
    if (vt==1)
    {
        if (a[3]-a[2]==a[4]-a[3])
        {
            d=a[3]-a[2];
            return a[2]-d;
        }
        if (a[3]/a[2]==a[4]/a[3])
        {
            d=a[3]/a[2];
            return a[2]/d;
        }
        return -1;
    }
    if (vt==2)
    {
        if ((a[3]-a[1])/2==a[4]-a[3])
        {
            d=a[4]-a[3];
            return a[3]-d;
        }
        if ((a[3]/a[1])==(a[4]/a[3])*(a[4]/a[3]))
        {
            d=a[4]/a[3];
            return a[3]/d;
        }
        return -1;
    }
    if (vt==3)
    {
        if ((a[4]-a[2])/2==a[2]-a[1])
        {
            d=a[2]-a[1];
            return a[4]-d;
        }
        if ((a[4]/a[2])==(a[2]/a[1])*(a[2]/a[1]))
        {
            d=a[2]/a[1];
            return a[4]/d;
        }
        return -1;
    }
    if (vt==4)
    {
        if (a[3]-a[2]==a[2]-a[1])
        {
            d=a[3]-a[2];
            return a[3]+d;
        }
        if (a[3]/a[2]==a[2]/a[1])
        {
            d=a[3]/a[2];
            return a[3]*d;
        }
        return -1;
    }
}
int main()
{
    while (1)
    {
        int dem=0,vt=0;
        for(int i=1;i<=4;i++)
        {
            cin>>a[i];
            if (a[i]==-1)
            {
                vt=i;
                dem++;
            }
        }
        if (dem==4) return 0;
        int res=kt(vt);
        if (res>=1&&res<=10000) cout<<res;
        else cout<<-1;
        cout<<endl;
    }
	return 0;
}
