#include<iostream>
#include<string>
#include<math.h>

using namespace std;
int main()
{
    string s1="",s2="";
    int dem=0;
    int dd[30]={};
    for(int i=0;i<30;i++) dd[i]=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++) dd[s1[i]-'a']++;
    for(int i=0;i<s2.length();i++) dd[s2[i]-'a']--;
    for(int i=0;i<=('z'-'a');i++)
        if (dd[i]!=0) dem+=fabs(dd[i]);
    cout<<dem;
    return 0;
}
