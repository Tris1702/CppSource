#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,res=0,le=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='S') res++;
        if (s[i]=='L')
        {
            if (le==1)
            {
                res++;
                le=0;
            }
            else le=1;
        }
    }
    res++;
    cout<<min(res,n);
	return 0;
}
