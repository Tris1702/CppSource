#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
struct diem
{
    long long x,y;
};
diem d[4]={};
int huong()
{
    long long u1,u2,v1,v2;
    u1=d[2].x-d[1].x;
    v1=d[2].y-d[1].y;
    u2=d[3].x-d[2].x;
    v2=d[3].y-d[2].y;
    if (u1*v2==u2*v1) return 0;
    if (u1*v2-u2*v1>0) return 1;
    return 2;
}
int main()
{
    for(int i=1;i<=3;i++) cin>>d[i].x>>d[i].y;
    int tmp=huong();
    if (tmp==0) cout<<"TOWARDS";
    if (tmp==1) cout<<"LEFT";
    if (tmp==2) cout<<"RIGHT";
	return 0;
}
