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
        int n,res=0;
        cin>>n;
        for(int i=2;i*i<=n;i++)
            if (n%i==0)
            {
                if (i%2==0) res++;
                if (i*i!=n&&((n/i)%2==0)) res++;
            }
        if (n%2==0) res++;
        cout<<res<<endl;
    }
	return 0;
}
