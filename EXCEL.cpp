#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        string s,res="";
        cin>>s;
        if (s=="R0C0") return 0;
        int i=1;
        for(i=1;i<s.length();i++)
            if (s[i]=='C') break;
        i++;
        int so=0,tmp1=26;
        for(;i<s.length();i++)
        {
            so=so*10+(s[i]-'0');
        }
        while(so>tmp1)
        {
            so-=tmp1;
            tmp1*=26;
        }
        tmp1/=26;
        while (tmp1>1)
        {
            int r=so/tmp1;
            if (so%tmp1==0) r--;
            char c=r+'A';
            res=res+c;
            so=so-tmp1*r;
            tmp1/=26;
        }
        if (so>0)
        {
            char c=so-1+'A';
            res=res+c;
        }
        for(int k=1;k<s.length();k++)
        {
            if (s[k]=='C') break;
            res=res+s[k];
        }
        cout<<res<<endl;
    }
	return 0;
}
