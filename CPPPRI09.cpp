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
        int n,k,dem=0;
        cin>>n;
        for(int i=2;i*i<=n;i++)
            if (n%i==0)
            {
                int dem=0;
                while(n%i==0)
                {
                    dem++;
                    n/=i;
                }
                cout<<i<<' '<<dem<<' ';
            }
        if (n>1) cout<<n<<' '<<1;
        cout<<endl;
    }
    return 0;
}



