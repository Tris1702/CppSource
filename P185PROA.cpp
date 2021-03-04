#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            int c1=('9'-'0')-(s[i]-'0'),c2=s[i]-'0';
            s[i]=(min(c1,c2)+'0');
            if (s[i]=='0'&&i==0) s[i]=(max(c1,c2)+'0');
        }
        cout<<s<<endl;
    }
	return 0;
}
