#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool nhiphanketiep(string &s)
{
    int i=s.length();
    while (i>0&&s[i]=='1') i--;
    if (i>0)
    {
        s[i]='1';
        for(int j=i+1;j<s.length();j++) s[j]='0';
        return 1;
    }
    return 0;
}
int main()
{
    string s="",kt="";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+='0';
        kt+='1';
    }
    cout<<s<<endl;
    while (1)
    {
        if (nhiphanketiep(s)) cout<<s<<endl;
        else break;
    }
    cout<<kt;
	return 0;
}
