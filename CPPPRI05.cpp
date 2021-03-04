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
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
            if (ktr(i)) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
