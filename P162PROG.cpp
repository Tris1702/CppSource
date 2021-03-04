#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,res=0;
    cin>>n;
    for(int i=n;i;i>>=1)
        if (i&1) res++;
    cout<<res;
	return 0;
}
