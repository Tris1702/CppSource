#include <bits/stdc++.h>
using namespace std;
int n,k;
long long x;
vector<long long> a;

int main()
{
    scanf("%d%d%lld",&n,&k,&x);
    for(int i=1;i<=n;i++)
    {
        long long so;
        scanf("%lld",&so);
        a.push_back(so);
    }
    for(int i=0;i<a.size();i++) a[i]=fabs(a[i]-x);
    sort(a.begin(),a.end());
    for(int i=0;i<k;i++)
        printf("%lld ",a[i]);
    return 0;
}
