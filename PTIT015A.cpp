#include<iostream>

using namespace std;
void xoablank(string &s)
{
    int i=0;
    while (i<s.length())
    {
        if (s[i]==' ') s.erase(i,1);
        else i++;
    }
}
void sx(string &s)
{
    for(int i=0;i<s.length();i++)
        for(int j=i+1;j<s.length();j++)
        if (s[i]<s[j])
    {
        char tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
}
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int t=1;t<=T;t++)
    {
        string s="";
        getline(cin,s);
        xoablank(s);
        sx(s);
        cout<<s<<endl;
    }
    return 0;
}
