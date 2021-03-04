#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,k,a[100005]={};
void sx(int d,int c)
{
    if (d>=c) return;
    int key=a[(d+c)/2],i=d,j=c;
    while (i<j)
    {
        while (a[i]<key) i++;
        while (a[j]>key) j--;
        if (i<=j)
        {
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;
            j--;
        }
    }
    sx(d,j);
    sx(i,c);
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sx(1,n);
    cout<<a[k+1];
	return 0;
}
