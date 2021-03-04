#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
double tinh(int a,int b,int c,int d)
{
    return fabs(a/b-c/d);
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int luu=0;
    double maxx,th1=tinh(a,c,b,d),th2=tinh(d,b,a,c),th3=tinh(c,a,d,b),th4=tinh(b,d,c,a);
    maxx=th1;
    if (th2>maxx)
    {
        luu=1;
        maxx=th2;
    }
    if (th3>maxx)
    {
        luu=2;
        maxx=th3;
    }
    if (th4>maxx)
    {
        luu=3;
        maxx=th4;
    }
    cout<<luu;
	return 0;
}
