#include<iostream>
#include<math.h>
#include<stdbool.h>
#include<vector>
using namespace std;
struct person
{
    string ten;
    int dd,mm,yy;
    person()
    {
        ten="";
        dd=mm=yy=0;
    }
};
bool lonhon(person a, person b)
{
    if (a.yy<b.yy) return 1;
    if (a.yy>b.yy) return 0;
    if (a.mm<b.mm) return 1;
    if (a.mm>b.mm) return 0;
    if (a.dd<b.dd) return 1;
    return 0;
}
bool nhohon(person a, person b)
{
    if (a.yy>b.yy) return 1;
    if (a.yy<b.yy) return 0;
    if (a.mm>b.mm) return 1;
    if (a.mm<b.mm) return 0;
    if (a.dd>b.dd) return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<person> nguoi;
    for(int i=1;i<=n;i++)
    {
        person tmp;
        cin>>tmp.ten;
        cin>>tmp.dd>>tmp.mm>>tmp.yy;
        nguoi.push_back(tmp);
    }
    person gia=nguoi[0],tre=nguoi[0];
    for(int i=1;i<n;i++)
    {
        if (lonhon(nguoi[i],gia)) gia=nguoi[i];
        if (nhohon(nguoi[i],tre)) tre=nguoi[i];
    }
    cout<<tre.ten<<endl<<gia.ten;
    return 0;
}
