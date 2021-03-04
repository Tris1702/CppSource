#include <iostream>
#include<vector>

using namespace std;
struct cap
{
    int F,S;
    cap()
    {
        F=S=0;
    }
};
bool cmp(cap a, cap b)
{
    if (a.S>b.S) return 1;
    if (a.S==b.S&&a.F<b.F) return 1;
    return 0;
}
int main()
{
    int n,a[1005]={},tanso[1005]={};
    int dd[1005]={};
    vector<cap> res;
    res.resize(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    a[0]=0;
    for(int i=1;i<a[1];i++) dd[i]=-1;
    for(int i=1;i<=n;i++)
    if (dd[a[i]]==0)
    {
        tanso[a[i]]++;
        if (a[i]!=a[i-1]) dd[a[i-1]]=1;
    }
    dd[a[n]]=1;
    for(int i=1;i<=1000;i++)
        if (tanso[i]>0)
        {
            cap tmp;
            tmp.F=i;
            tmp.S=tanso[i];
            res.push_back(tmp);
            dd[i]=0;
        }
    for(int i=0;i<res.size();i++)
        for(int j=i+1;j<res.size();j++)
        if (cmp(res[j],res[i]))
    {
        cap tmp=res[i];
        res[i]=res[j];
        res[j]=tmp;
    }
    for(int i=0;i<res.size();i++) cout<<res[i].F<<' '<<res[i].S<<endl;
    return 0;
}
