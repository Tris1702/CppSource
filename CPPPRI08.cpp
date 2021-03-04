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
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            int tmp=i,j=0;
            while (tmp%k==0)
            {
                j++;
                tmp/=k;
            }
            dem+=j;
        }
        cout<<dem<<endl;
    }
    return 0;
}


