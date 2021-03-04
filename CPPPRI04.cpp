#include<iostream>
#include<math.h>
#include<stdbool.h>
int ktr(int a)
{
    if (a<2) return 1;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return i;
    return a;
}
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        long long i;
        for(i=1;i<=n;i++)
            cout<<ktr(i)<<' ';
        cout<<endl;
    }
    return 0;
}



