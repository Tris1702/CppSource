#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int thue(int n)
{
    if (n<1e6) return 0;
    if (n>=1e6&&n<=5*1e6) return n*0.1;
    return n*0.2;
}
int main()
{
    int n;
    while (1)
    {
        cin>>n;
        if (n==0) return 0;
        cout<<n-thue(n)<<endl;
    }
	return 0;
}
