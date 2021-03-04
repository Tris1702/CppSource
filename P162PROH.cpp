#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int x,res=0,d[10001]={};
    cin>>x;
    for(int i=1;i<=x;i++) d[i]=d[i-1]+i;
    for(int i=1;i<=x;i++)
        if (d[i]<=x)
        {
            res++;
            x-=d[i];
        }
    cout<<res;
	return 0;
}
