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
        int tong=0;
        for(int j=1;j<=3;j++)
        {
            int so;
            cin>>so;
            tong+=so;
        }
        if (tong>=2) res++;
    }
    cout<<res;
	return 0;
}
