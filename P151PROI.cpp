#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n;
int tcs(int n)
{
    int tong=0;
    while (n>0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        while (n>=10) n=tcs(n);
        cout<<n<<endl;
    }
	return 0;
}
