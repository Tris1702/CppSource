#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long n;
        cin>>n;
        for(long long i=2;i*i<=n;i++)
            while (n%i==0)
            {
                cout<<i<<' ';
                n/=i;
            }
        if (n>1) cout<<n;
        cout<<endl;
    }
    return 0;
}
