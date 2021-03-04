#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int p,q;
        cin>>p>>q;
        if (q-p>=2) res++;
    }
    cout<<res;
	return 0;
}
