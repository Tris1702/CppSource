#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int tmp=(s[0]-'0')*10+(s[1]-'0');
    if (s[s.length()-2]=='P'&&tmp<12)
    {
        tmp=tmp+12;
        char c2=tmp%10+'0';
        tmp/=10;
        char c1=tmp%10+'0';
        s[0]=c1;
        s[1]=c2;
    }
    if (s[s.length()-2]=='A'&&tmp==12) s[0]=s[1]='0';
    s.erase(s.length()-2,2);
    cout<<s;
	return 0;
}
