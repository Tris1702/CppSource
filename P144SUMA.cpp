#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,dem=0;
    cin>>n;
    char luua,luub;
    for(int i=1;i<=n;i++)
    {
        char a,b;
        cin>>a>>b;
        if ((i==1)||(a!=luua&&b!=luub))
        {
            luua=a;
            luub=b;
            dem++;
        }
    }
    cout<<dem;
	return 0;
}
