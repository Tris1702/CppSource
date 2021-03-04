#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,x,dem=0;
    cin>>n>>x;
    for(int i=1;i<=sqrt(x);i++)
        if (x%i==0)
            if (i<=n&&x/i<=n)
                if (i!=n/i) dem+=2;
                else dem++;
    cout<<dem;
	return 0;
}
