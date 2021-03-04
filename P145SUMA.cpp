#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
        if (s[i]!='4'&&s[i]!='7')
        {
            cout<<"NO";
            return 0;
        }
    int d=0,c=s.length()-1,dem14=0,dem24=0,dem17=0,dem27=0;
    while (d<c)
    {
        if (s[d]=='4') dem14++; else dem17++;
        if (s[c]=='4') dem24++; else dem27++;
        d++;
        c--;
    }
    if (dem14==dem24&&dem17==dem27) cout<<"YES";
    else cout<<"NO";
	return 0;
}
