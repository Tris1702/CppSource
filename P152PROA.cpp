#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int ucln(int a,int b)
{
    while (a>0)
    {
        if (a<b)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a%=b;
    }
    return b;
}
bool kt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int x,dem=0;
        cin>>x;
        for(int i=1;i<=x;i++)
            if (ucln(i,x)==1) dem++;
        if (kt(dem)) cout<<1;
        else cout<<0;
        cout<<endl;
    }
	return 0;
}
