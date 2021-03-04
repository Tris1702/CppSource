#include<iostream>
#include<math.h>
#include<stdbool.h>
bool ktr(int a)
{
    if (a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
using namespace std;
int main()
{
    bool dd[10005]={};
    for(int i=0;i<=10000;i++)
        if (ktr(i)) dd[i]=1;
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        for(int i=2;i<=n/2;i++)
            if (dd[i]&&dd[n-i])
            {
                cout<<i<<' '<<n-i<<endl;
                break;
            }
    }
    return 0;
}

