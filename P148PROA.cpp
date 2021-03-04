#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    while (1)
    {
        int n,dem=1;
        cin>>n;
        if (n==0) return 0;
        while (n!=1)
        {
            if (n%2==0) n=n/2;
            else n=n*3+1;
            dem++;
        }
        cout<<dem<<endl;
    }
	return 0;
}
