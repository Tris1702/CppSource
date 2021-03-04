#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,tang=1,res=1,tmp=1;
    cin>>n;
    while (tmp<n)
    {
        tang++;
        res+=tang;
        tmp+=res;
    }
    if (n<tmp) tang--;
    cout<<tang;
	return 0;
}
