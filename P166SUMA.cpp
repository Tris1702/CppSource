#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,res=0;
    bool dd[5001]={};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int so;
        cin>>so;
        dd[so]=1;
    }
    for(int i=1;i<=n;i++)
        if (dd[i]==0) res++;
	cout<<res;
	return 0;
}
