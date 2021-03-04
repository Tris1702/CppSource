#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[5]={},b[5]={};
int maxx=0;
bool dd[5]={};
void kt()
{
    if (b[a[4]]>=b[a[2]]&&b[a[1]]>=b[a[3]])
    {
        int d=b[a[3]],r=b[a[2]];
        maxx=max(maxx,d*r);
    }
}
void sinh(int vt)
{
    if (vt>4) kt();
    for(int i=1;i<=4;i++)
        if (dd[i]==0)
        {
            a[vt]=i;
            dd[i]=1;
            sinh(vt+1);
            dd[i]=0;
        }
}
int main()
{
    for(int i=1;i<=4;i++) cin>>b[i];
    sinh(1);
    cout<<maxx;
	return 0;
}
