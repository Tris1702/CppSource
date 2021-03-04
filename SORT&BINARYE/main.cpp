#include <bits/stdc++.h>

using namespace std;
vector<double> a;
int n,k;
double res,tong=0;
bool kt(double x)
{
    double s=0;
    for(int i=0;i<a.size();i++)
        if (a[i]<x) s+=((x-a[i])/(1-(double)k/100))*(double)k/100;
    if (s+x*n<=tong) return 1;
    return 0;
}
void bs(double l,double r)
{
    if (l>r) return;
    if (l==r||r-l<0.0000001)
    {
        if (kt(l)) res=l;
        if (kt(r)) res=r;
        return ;
    }
    double tmp=(l+r)/2;
    if (kt(tmp))
    {
        res=tmp;
        bs(tmp,r);
    }
    else bs(l,tmp);
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        double so;
        scanf("%lf",&so);
        tong+=so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    bs(0,a.back());
    printf("%.6lf",res);
    return 0;
}
