#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
#include<map>
#define mp make_pair
#define F first
#define S second
using namespace std;
map<int,int> dd;
vector<pair<int,int> > luu;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if (dd[a.F]>dd[b.F]) return 1;
    if (dd[a.F]==dd[b.F]&&a.S<b.S) return 1;
    return 0;
}
int main()
{
    int n,c;
    cin>>n>>c;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        if (dd[so]==0) luu.push_back(mp(so,i));
        dd[so]++;
    }
    sort(luu.begin(),luu.end(),cmp);
    for(int i=0;i<luu.size();i++)
        for(int j=1;j<=dd[luu[i].F];j++) cout<<luu[i].F<<' ';
	return 0;
}
