#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
struct day
{
    int d;
    int c;
    int cs;
};
vector<day> F;
bool cmp(day a,day b)
{
    if (a.d<b.d) return 1;
    if (a.d==b.d&&a.c>b.c) return 1;
    return 0;
}
int main()
{
    int n,luu=-1,maxx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        day tmp;
        cin>>tmp.d>>tmp.c;
        tmp.cs=i;
        F.push_back(tmp);
        maxx=max(maxx,tmp.c);
    }
    sort(F.begin(),F.end(),cmp);
    if (F[0].c==maxx) luu=F[0].cs;
    cout<<luu;
	return 0;
}
