#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,res="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        res="";
        for(int j=i;j<s.length();j++)
        {
            res=res+s[j];
            cout<<res<<endl;
        }
    }
    return 0;
}
