#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long res=0;
    for(int i=1;i<=n;i++)
    {
        int x,y,z,xx,yy,zz;
        cin>>x>>y>>z>>xx>>yy>>zz;
        res+=fabs(x-xx)*fabs(y-yy)*fabs(z-zz);
    }
    cout<<res;
	return 0;
}
