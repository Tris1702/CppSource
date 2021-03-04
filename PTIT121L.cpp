#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int d[4]={},r[4]={},a[4]={};
bool ktr1()
{
    return (d[1]==d[2]&&d[2]==d[3]&&r[1]+r[2]+r[3]==d[1]);
}
bool ktr2()
{
    if ((d[a[1]]==r[a[1]]+r[a[2]])&&
        ((r[a[2]]==d[a[3]]&&d[a[2]]+r[a[3]]==d[a[1]])||
        (r[a[2]]==r[a[3]]&&d[a[2]]+d[a[3]]==d[a[1]]))) return 1;
    if ((d[a[1]]==r[a[1]]+d[a[2]])&&
        ((d[a[2]]==r[a[3]]&&r[a[2]]+d[a[3]]==d[a[1]])||
         (d[a[2]]==d[a[3]]&&r[a[2]]+r[a[3]]==d[a[1]]))) return 1;
    return 0;
}
void sinh(int vt,bool &kt)
{
    if (kt==1) return;
    if (vt>3)
    {
        if (ktr2())
        {
            cout<<d[a[1]];
            kt=1;
        }
        return;
    }
    for(int i=1;i<=3;i++)
    {
        a[vt]=i;
        sinh(vt+1,kt);
    }
}
int main()
{
    cin>>r[1]>>d[1]>>r[2]>>d[2]>>r[3]>>d[3];
    if (r[1]>d[1]) swap(r[1],d[1]);
    if (r[2]>d[2]) swap(r[2],d[2]);
    if (r[3]>d[3]) swap(r[3],d[3]);
    if (ktr1())
    {
        cout<<d[1];
        return 0;
    }
    bool kt=0;
    sinh(1,kt);
    if (kt==0) cout<<0;
	return 0;
}
