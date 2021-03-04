#include <iostream>
#include <string>

using namespace std;
string s;
int dd[100]={};
void chuanhoa()
{
    for(int i=0;i<s.length();i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-='a'-'A';
}
int main()
{
    getline(cin,s);
    chuanhoa();
    for(int i=0;i<s.length();i++)
    {
        dd[s[i]]++;
    }
    for(int i=65;i<=90;i++)
        if (dd[i]>0)
    {
        char c=i;
        cout<<c<<' '<<dd[i]<<endl;
    }
    return 0;
}
