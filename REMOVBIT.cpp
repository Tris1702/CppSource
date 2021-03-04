#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++)
        if (s[i]=='0')
        {
            s.erase(i,1);
            break;
        }
    if (i>=s.length()) s.erase(1,1);
    cout<<s;
    return 0;
}
