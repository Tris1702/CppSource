#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        string s;
        cin>>s;
        for(int i=s.length()-1;i>0;i--)
        {
            if (s[i]>='5') s[i-1]=s[i-1]+1;
            s[i]='0';
        }
        if (s[0]==':')
        {
            s[0]='0';
            s='1'+s;
        }
        cout<<s<<endl;
    }
	return 0;
}
