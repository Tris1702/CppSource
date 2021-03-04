#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if (a.F<b.F) return 1;
    if (a.F==b.F&&a.S<b.S) return 1;
    return 0;
}
int main()
{
    int n;
    F.push_back(mp(0,0));
    for(int i=1;i<=n;i++)
    {
        pair<int,int> tmp;
        cin>>tmp.F>>tmp.S;
        F.push_back(tmp);
    }
    F.push_back(mp(0,0));
    sort(F.begin(),F.end(),cmp);
    for(int i=1;i<F.size();i++) tg+=max(F[i].F,F[i-1].S);
	return 0;
}
