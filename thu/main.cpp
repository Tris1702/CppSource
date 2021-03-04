#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<int> a;

bool kt(int s)
{
    vector<bool> dd(s+1,0);
    dd[0]=1;
    FORT(i,0,a.size())
    {
        FORD(j,s,a[i])
            if (dd[j]==0&&dd[j-a[i]]) dd[j]=1;
    }
    return dd[s];
}
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T)
    {
        int x,sum=0;
        while (cin>>x)
        {
            cin>>x;
            a.push_back(x);
            sum+=x;
        }
        for(int s=sum/2;s>=0;s--)
        {
            if (kt(s))
            {
                cout<<fabs(sum-2*s);
                //cout<<s<<' '<<sum-s;
                return 0;
            }
        }
    }
    return 0;
}
