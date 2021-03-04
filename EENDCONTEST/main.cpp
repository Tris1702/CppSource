#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector <string> a;
int luui,luuj=-1;
bool kt(int i,int vt1,int vt2,int vt3,int vt4)
{
    string s1,s2;
    s1=s2="";
    for(int j=vt1;j<=vt2;j++) s1=s1+a[i][j];
    for(int j=vt3;j<=vt4;j++) s2=s2+a[i+1][j];
    return (s1==s2);
}
void xet(int vt)
{
    string s1=a[vt],s2=a[vt+1];
    int i=s1.length()-1,j=0;
    luui=0,luuj=-1;
    while (i>=0&&j<s2.length())
    {
        if (kt(vt,i,s1.length()-1,0,j))
        {
            luui=i;
            luuj=j;
        }
        i--;
        j++;
    }
}
int main()
{
    freopen("E.inp","r",stdin);
    freopen("E.out","w",stdout);
    string s;
    while (cin>>s) a.push_back(s);
    a.push_back(" ");
    for(int i=0;i<a.size()-1;i++)
    {
        int xp=luuj+1;
        xet(i);
        for(int j=xp;j<a[i].length();j++) cout<<a[i][j];
    }

    return 0;
}
