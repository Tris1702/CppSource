#include <iostream>
#include<string>

using namespace std;
string a,kq;
int b,dd;
int scs(int b)
{
    int dem=0;
    while (b>0)
    {
        dem++;
        b/=10;
    }
    return dem;
}
int stoso(int d,int c)
{
    int s=0;
    for(int i=d;i<=c;i++) s=s*10+(a[i]-'0');
    return s;
}
int phandu()
{
    int du=stoso(0,dd-1)%b;
    int i=dd;
    while (i<a.length())
    {
        du=du*10+(a[i]-'0');
        i++;
        du=du%b;
    }
    return du;
}
int main()
{
    cin>>a>>b;
    dd=scs(b);
    cout<<phandu();
    return 0;
}
