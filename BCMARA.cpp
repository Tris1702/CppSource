#include<iostream>
#include<vector>
using namespace std;
struct tg
{
    int hh,mm,ss;
    tg()
    {
        hh=mm=ss=0;
    }
};
bool nhanh(tg a, tg b)
{
    if (a.hh<b.hh) return 1;
    if (a.hh>b.hh) return 0;
    if (a.mm<b.mm) return 1;
    if (a.mm>b.mm) return 0;
    if (a.ss<b.ss) return 1;
    return 0;
}
int main()
{
    vector<tg> cow;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        tg tmp;
        cin>>tmp.hh>>tmp.mm>>tmp.ss;
        cow.push_back(tmp);
    }
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if (nhanh(cow[j],cow[i]))
    {
        tg tmp=cow[i];
        cow[i]=cow[j];
        cow[j]=tmp;
    }
    for(int i=0;i<n;i++)
        cout<<cow[i].hh<<' '<<cow[i].mm<<' '<<cow[i].ss<<endl;
    return 0;
}
