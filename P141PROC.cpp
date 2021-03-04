#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if (s=="++X"||s=="X++") x++;
        else x--;
    }
    cout<<x;
	return 0;
}
