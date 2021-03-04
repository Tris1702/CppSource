#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> aa,ad,ba,bd;
long long res=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (so>0) ad.push_back(so);
        else aa.push_back(-so);
    }
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (so>0) bd.push_back(so);
        else ba.push_back(-so);
    }
    sort(ad.begin(),ad.end());
    sort(aa.begin(),aa.end());
    sort(bd.begin(),bd.end());
    sort(ba.begin(),ba.end());
    int tmp=0;
    int i=0;
    vector<int>::iterator luuit=aa.begin();
    while (i<bd.size())
    {
        vector<int>::iterator it;
        it=upper_bound(luuit,aa.end(),bd[i]);
        if (it!=aa.end())
        {
            res++;
            luuit=it+1;
        }
        i++;
    }
    i=0;
    luuit=ba.begin();
    while (i<ad.size())
    {
        vector<int>::iterator it;
        it=upper_bound(luuit,ba.end(),ad[i]);
        if (it!=ba.end())
        {
            res++;
            luuit=it+1;
        }
        i++;
    }
    cout<<res;
    return 0;
}
