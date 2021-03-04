#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>

using namespace std;
struct diem
{
    long long x,y;
};
bool cungphia(diem a,diem b)
{
    if (a.y>0&&b.y>0) return 1;
    if (a.y<0&&b.y<0) return 1;
    return 0;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        diem a,b;
        cin>>a.x>>a.y>>b.x>>b.y;
        if (cungphia(a,b)) a.y=-a.y;
        long long d=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
        cout<<d<<endl;
    }
	return 0;
}
