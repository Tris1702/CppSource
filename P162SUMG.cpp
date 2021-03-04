#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

string upp(string s)
{
    for(int i=0;i<s.length();i++)
        if (s[i]>='a'&&s[i]<='z') s[i]=s[i]-('a'-'A');
    return s;
}
string loww(string s)
{
    for(int i=0;i<s.length();i++)
        if (s[i]>='A'&&s[i]<='Z') s[i]=s[i]+('a'-'A');
    return s;
}
int main()
{
    int d1=0,d2=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        if (s[i]>='a'&&s[i]<='z') d1++;
        else d2++;
    if (d1<d2) cout<<upp(s);
    else cout<<loww(s);
	return 0;
}
