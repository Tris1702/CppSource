#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
struct diem
{
    int x,y;
};
diem a[5]={};
int b[5]={};
bool d=0;
bool dd[5]={};
bool kt()
{
    for(int i=1;i<=4;i++)
        for(int j=i+1;j<=4;j++)
            if (a[i].x==a[j].x&&a[i].y==a[j].y) return 0;
    return 1;
}
bool check()
{
    if (a[b[1]].x==a[b[3]].x&&a[b[2]].x==a[b[4]].x&&a[b[1]].y==a[b[2]].y&&a[b[3]].y==a[b[4]].y) return 1;
    return 0;
}
void sinh(int vt,bool &d)
{
    if (vt>4) d=check();
    if (d) return;
    else
        for(int i=1;i<=4;i++)
        if (dd[i]==0)
        {
            b[vt]=i;
            dd[i]=1;
            sinh(vt+1,d);
            dd[i]=0;
        }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        d=0;
        for(int i=1;i<=4;i++) dd[i]=0;
        for(int i=1;i<=4;i++) cin>>a[i].x>>a[i].y;
        if (kt())
        {
            sinh(1,d);
            if (d) cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
        cout<<endl;
    }
	return 0;
}
