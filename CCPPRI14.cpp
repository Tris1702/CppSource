#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n;
bool dd[1000007]={};
bool kt(int a)
{
    int x=sqrt(a);
    if (x*x==a)
    {
        for(int i=2;i<sqrt(a);i++)
            if (a%i==0) return 0;
    }
    else return 0;
    return 1;
}
void tao()
{
    for(int i=4;i<=1000006;i++)
    if (kt(i)) dd[i]=1;
}
int main()
{
    int T;
    tao();
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        for(int i=4;i<=n;i++)
            if (dd[i]) cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
