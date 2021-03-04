#include <bits/stdc++.h>

using namespace std;
int n,a[100005]={};
bool res=0;
void qs(int d,int c)
{
    if (d>=c) return;
    int key=a[(d+c)/2],i=d,j=c;
    while (i<=j)
    {
        while (a[i]<key) i++;
        while (a[j]>key) j--;
        if (i<=j)
        {
            if (i!=j) res=!res;
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    qs(d,j);
    qs(i,c);
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    qs(1,n);
    if (res==0) printf("1");
    else printf("0");
    return 0;
}
