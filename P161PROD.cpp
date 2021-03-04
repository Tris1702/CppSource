#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string s,s1,s2,s3;
char chinh1(int vt)
{
    for(int i=0;i<s1.length();i++)
        if (s1[i]==s[vt])
    {
        if (i+1<s1.length()) return s1[i+1];
        else return s1[0];
    }
    for(int i=0;i<s2.length();i++)
        if (s2[i]==s[vt])
    {
        if (i+1<s2.length()) return s2[i+1];
        else return s2[0];
    }
    for(int i=0;i<s1.length();i++)
        if (s3[i]==s[vt])
    {
        if (i+1<s3.length()) return s3[i+1];
        else return s3[0];
    }
}
char chinh2(int vt)
{
    for(int i=0;i<s1.length();i++)
        if (s1[i]==s[vt])
    {
        if (i-1>=0) return s1[i-1];
        else return s1[s1.length()-1];
    }
    for(int i=0;i<s2.length();i++)
        if (s2[i]==s[vt])
    {
        if (i-1>=0) return s2[i-1];
        else return s2[s2.length()-1];
    }
    for(int i=0;i<s1.length();i++)
        if (s3[i]==s[vt])
    {
        if (i-1>=0) return s3[i-1];
        else return s3[s3.length()-1];
    }
}
int main()
{
    s1="qwertyuiop";
    s2="asdfghjkl;";
    s3="zxcvbnm,./";
    char c;
    cin>>c>>s;
    for(int i=0;i<s.length();i++)
    {
        if (c=='L') s[i]=chinh1(i);
        else s[i]=chinh2(i);
    }
    cout<<s;
	return 0;
}
