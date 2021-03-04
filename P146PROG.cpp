#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a[100001]={};
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int d=1,c=n,H=0,L=0;
    if (n==1)
    {
        cout<<1<<' '<<0;
        return 0;
    }
    while (d<=c)
    {
        if (a[d]==a[c])
        {
            d++;
            H++;
            L++;
            c--;
            if (d==c)
            {
                H++;
                break;
            }
        }
        else
            if (a[d]<a[c])
            {
                a[c]-=a[d];
                d++;
                H++;
                if (d==c)
                {
                    L++;
                    break;
                }
            }
            else
            {
                a[d]-=a[c];
                c--;
                L++;
                if (d==c)
                {
                    H++;
                    break;
                }
            }
    }
    cout<<H<<' '<<L;
	return 0;
}
