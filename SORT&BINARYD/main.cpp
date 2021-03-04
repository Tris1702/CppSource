#include <bits/stdc++.h>

using namespace std;
int n,k;
long long res;
vector<int> a,b;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int so;
        scanf("%d",&so);
        if (so>=0) a.push_back(so);
        else b.push_back(so);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++) res+=a[i];
    if (b.size()==0)
    {
        if (k%2!=0) res-=2*a[0];
    }
    else
    {
        if (k<=b.size())
        {
            for(int i=0;i<k;i++) res-=b[i];
            for(int i=k;i<b.size();i++) res+=b[i];
        }
        else
        {
            int tmp=k/b.size();
            k%=b.size();
            if (tmp%2==0) k+=b.size();
            for(int i=0;i<b.size();i++) res-=b[i];
            if (k%2!=0) res-=2*min((-b.back()),a[0]);
        }
    }
    cout<<res;
    return 0;
}
