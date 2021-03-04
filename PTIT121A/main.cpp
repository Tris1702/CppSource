#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define LL long long
using namespace std;
vector <pair < pair<LL,LL>,pair<LL,LL> > > x;
LL s;
int n;
bool dd[10]={};
int main()
{
    freopen("PTIT121A.inp","r",stdin);
    freopen("PTIT121A.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        LL a,b,c,d,tmp;
        cin>>a>>b>>c>>d;
        tmp=abs(a-c)*abs(b-d);
        s+=tmp;
        x.pb(mp(mp(a,b),mp(c,d)));
    }
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (i!=j&&dd[j]==0)
            {
                if (x[i].F.F>=x[j].F.F&&x[i].F.S<=x[j].F.S&&x[i].S.F<=x[j].S.F&&x[i].S.S>=x[j].S.S)
                {
                    dd[i]=1;
                    s-=abs(x[i].F.F-x[i].S.F)*abs(x[i].F.S-x[i].S.S);
                    break;
                }
            }
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++)
            if (dd[i]==0&&dd[j]==0)
    {
        int a,b,c,d,tmp;
        if (x[i].F.F>=x[j].S.F||x[i].S.F<=x[j].F.F||x[i].F.S<=x[j].S.S||x[i].S.S>=x[j].F.S);
        else
        {
            a=max(x[i].F.F,x[j].F.F);
            b=min(x[i].F.S,x[j].F.S);
            c=min(x[i].S.F,x[j].S.F);
            d=max(x[i].S.S,x[j].S.S);
            tmp=abs(a-c)*abs(b-d);
            s-=tmp;
        }
    }
    cout<<s;
    return 0;
}
