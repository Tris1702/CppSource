#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
void xuli(int a,int b,int c)
{
    if (a==b+c)
    {
        cout<<a<<'='<<b<<'+'<<c;
        return;
    }
    if (a==b-c)
    {
        cout<<a<<'='<<b<<'-'<<c;
        return;
    }
    if (a==b*c)
    {
        cout<<a<<'='<<b<<'*'<<c;
        return;
    }
    if (a*c==b)
    {
        cout<<a<<'='<<b<<'/'<<c;
        return;
    }

    if (a+b==c)
    {
        cout<<a<<'+'<<b<<'='<<c;
        return;
    }
    if (a-b==c)
    {
        cout<<a<<'-'<<b<<'='<<c;
        return;
    }
    if (a*b==c)
    {
        cout<<a<<'*'<<b<<'='<<c;
        return;
    }
    if (a==c*b)
    {
        cout<<a<<'/'<<b<<'='<<c;
        return;
    }
    if (a==-b+c)
    {
        cout<<a<<'='<<'-'<<b<<'+'<<c;
        return;
    }
    if (-a+b==c)
    {
        cout<<'-'<<a<<'+'<<b<<'='<<c;
        return;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    xuli(a,b,c);
	return 0;
}
