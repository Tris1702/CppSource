#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int a[10]={},b[10]={};
int res=0;
bool dd[10]={};
void kt()
{
    for(int i=1;i<=6;i++)
    {
        if (a[b[1]]==a[b[2]]&&a[b[1]]==a[b[3]]&&a[b[1]]==a[b[4]])
        {
            if (a[b[5]]==a[b[6]]) res=1;
            if (a[b[5]]<a[b[6]]) res=2;
        }
    }
}
void sinh(int vt)
{
    if (vt>6) kt();
    else
        for(int i=1;i<=6;i++)
        if (dd[i]==0)
        {
            b[vt]=i;
            dd[i]=1;
            sinh(vt+1);
            dd[i]=0;
        }
}
int main()
{
    for(int i=1;i<=6;i++)
        cin>>a[i];
    sinh(1);
    if (res==0) cout<<"Alien";
    if (res==1) cout<<"Elephant";
    if (res==2) cout<<"Bear";
	return 0;
}
