#include<iostream>
#include<string>
#include<vector>
#include<math.h>
 
using namespace std;
vector<long long> a;
int main()
{
    int n,res=0;
    cin>>n;
    a.resize(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int d=1,c=n;
    while (d<c)
    {
        if (d<c&&a[d]==a[c])
        {
            d++;
            c--;
        }
        if (d<c&&a[d]<a[c])
        {
            d++;
            a[d]=a[d]+a[d-1];
            res++;
        }
        if (d<c&&a[d]>a[c])
        {
            c--;
            a[c]=a[c]+a[c+1];
            res++;
        }
    }
    cout<<res;
	return 0;
}