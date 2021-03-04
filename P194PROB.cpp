#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,a[101]={},maxx=0,minn=1e9,vtmaxx,vtminn;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if (maxx<a[i])
        {
            maxx=a[i];
            vtmaxx=i;
        }
        if (minn>=a[i])
        {
            minn=a[i];
            vtminn=i;
        }
    }
    if (vtmaxx<vtminn) cout<<vtmaxx-1+n-vtminn;
    else cout<<vtmaxx-2+n-vtminn;
	return 0;
}
