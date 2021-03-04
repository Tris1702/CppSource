#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
    int i=0;
    while (i<s.length())
    {
        while (s[i]==' ') s.erase(i,1);
        i++;
    }
}
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int t=1;t<=T;t++)
    {
        string s;
        bool bo[226]={};
        getline(cin,s);
        chuanhoa(s);
        s='+'+s;
        int bq=0;
        bo[0]=1;
        stack<int> st;
        for(int i=1;i<s.length();i++)
        {
            if (s[i]=='(')
            {
                st.push(i);
                if (s[i-1]=='+'||s[i-1]=='(') bo[i]=1;
            }
            if (s[i]==')')
            {
                if (bo[st.top()]==1||st.empty()) bo[i]=1;
                if (!st.empty()) st.pop();
            }
        }
        string res="";
        for(int i=0;i<s.length();i++)
            if (bo[i]==0) res=res+s[i]; else bo[i]=0;
        for(int i=0;i<res.length()-2;i++)
            if (res[i]=='('&&res[i+2]==')')
        {
            bo[i]=1;
            bo[i+2]=1;
        }
        for(int i=0;i<res.length();i++)
            if (bo[i]==0) cout<<res[i];
        cout<<endl;
    }
	return 0;
}
