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
        int n,k;
        cin>>n>>k;
        int i;
        for(i=2;i*i<=n;i++)
        {
            while (n%i==0)
            {
                k--;
                n/=i;
            }
            if (k<=0)
            {
                cout<<i<<endl;
                n=-1;
            }
        }
        if (n>-1)
        {
            if (n>1) k--;
            if (k<=0) cout<<n<<endl;
            else cout<<-1<<endl;
        }
    }
	return 0;
}
