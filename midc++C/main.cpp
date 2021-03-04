#include <iostream>
#include <string>
#include<math.h>
using namespace std;
string s;
bool kt(int a)
{
    if(a<2) return 0;
    for(int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if (kt(i)) cout<<'*';
        else cout<<s[i];
    return 0;
}
