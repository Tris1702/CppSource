#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    string s,s1,s2;
    int n,d1=0,d2=0;
    cin>>n;
    cin>>s;
    s1=s;
    d1++;
    for(int i=2;i<=n;i++)
    {
        cin>>s;
        if (s==s1) d1++;
        else
        {
            s2=s;
            d2++;
        }
    }
    if (d1>d2) cout<<s1;else cout<<s2;
	return 0;
}
