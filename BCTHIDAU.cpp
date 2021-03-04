#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define F first
#define S second
#define mp make_pair
using namespace std;
struct ts
{
    string ten;
    vector<pair<int,int> > bai;
    ts()
    {
        ten="";
        bai.resize(0);
    }
};
int phat(ts a)
{
    int diem=0;
    for(int i=0;i<=3;i++)
        if (a.bai[i].S>0)
            diem+=(a.bai[i].F-1)*20+a.bai[i].S;
    return diem;
}
bool hon(pair<int,int> a,int tmp,int tg)
{

    if (a.F<tmp) return 1;
    if (a.F==tmp&&a.S>tg) return 1;
    return 0;
}
int main()
{
    vector<ts> thisinh;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ts tmp;
        cin>>tmp.ten;
        for(int j=1;j<=4;j++)
        {
            pair<int,int> tmp1;
            cin>>tmp1.F>>tmp1.S;
            tmp.bai.push_back(tmp1);
        }
        thisinh.push_back(tmp);
    }
    pair<int,int> maxx=mp(0,1e9);
    string winner="";
    for(int i=0;i<thisinh.size();i++)
    {
        int diem=phat(thisinh[i]);
        int tmp=0;
        for(int j=0;j<=3;j++)
            if (thisinh[i].bai[j].S>0) tmp++;
        if (hon(maxx,tmp,diem))
        {
            winner=thisinh[i].ten;
            maxx.F=tmp;
            maxx.S=diem;
        }
    }
    cout<<winner<<' '<<maxx.F<<' '<<maxx.S;
	return 0;
}
