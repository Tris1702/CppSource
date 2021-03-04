#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,k,a[11]={},dem=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n-k;i++)
        {
            int j;
            for(j=1;j<k;j++)
                if (a[i+j-1]>a[i+j]) break;
            if (j>=k) dem++;
        }
        cout<<dem<<endl;
    }

	return 0;
}
