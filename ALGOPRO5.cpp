#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    long long n,luu=1,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        luu*=2;
        res+=luu;
    }
    cout<<res;
	return 0;
}
