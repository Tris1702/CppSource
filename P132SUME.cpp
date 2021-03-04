#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
using namespace std;
struct diem
{
    int x,y;
    diem()
    {
        x=y=0;
    }
};
double s(int xa,int ya,int xb,int yb,int xc,int yc)
{
    double res=0.5*fabs((double)(xb-xa)*(double)(yc-ya)-(double)(xc-xa)*(double)(yb-ya));
    return res;
}
int main()
{
    diem u1,u2,u3;
    cin>>u1.x>>u1.y>>u2.x>>u2.y>>u3.x>>u3.y;
    double tamg=s(u1.x,u1.y,u2.x,u2.y,u3.x,u3.y);
    diem poi[101]={};
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>poi[i].x>>poi[i].y;
    for(int i=1;i<=n;i++)
    {
        double tmp1=s(poi[i].x,poi[i].y,u1.x,u1.y,u2.x,u2.y);
        double tmp2=s(poi[i].x,poi[i].y,u1.x,u1.y,u3.x,u3.y);
        double tmp3=s(poi[i].x,poi[i].y,u2.x,u2.y,u3.x,u3.y);
        if ((tmp1+tmp2+tmp3)==tamg) res++;
    }
    printf("%.1lf",tamg);
    cout<<endl<<res;
	return 0;
}
