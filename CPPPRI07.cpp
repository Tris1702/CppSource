#include<iostream>
#include<math.h>
#include<stdbool.h>

using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,dem=0,i;
        cin>>n;
        for(i=2;i*i<=n;i++)
        {
            int tmp=0;
            while (n%i==0)
            {
                tmp++;
                n/=i;
            }
            if (tmp>1) dem=10;
            if (tmp==1) dem++;
        }
        if (n>1) dem++;
        if (dem==3) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}


