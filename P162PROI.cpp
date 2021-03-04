#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if (s[0]=='-')
    {
        if (n>=3)
        {
            if (s[n-1]>s[n-2]) s.erase(n-1,1);
            else s.erase(n-2,1);
        }
    }
    if (s.length()==1&&s[0]=='-') s="0";
    else
        if (s.length()==2&&s[0]=='-') s="0";
    cout<<s;
	return 0;
}
