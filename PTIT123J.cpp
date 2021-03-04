#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stack>
using namespace std;

int main()
{
    int ngoac1=0,ngoac2=0;
    string s;
    while (getline(cin,s))
    {
        if (s==".") break;
        string res="";
        stack<char> st;
        for(int i=0;i<s.length();i++)
            if (s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']') res=res+s[i];
        int i;
        for(i=0;i<res.length();i++)
        {
            if(res[i]=='('||res[i]=='[') st.push(res[i]);
            if (res[i]==')')
            {
                if (st.empty())
                {
                    cout<<"no";
                    break;
                }
                if (st.top()=='(') st.pop();
                else
                {
                    cout<<"no";
                    break;
                }
            }
            if (res[i]==']')
            {
                if (st.empty())
                {
                    cout<<"no";
                    break;
                }
                if (st.top()=='[') st.pop();
                else
                {
                    cout<<"no";
                    break;
                }
            }
        }
        if (i>=res.length())
            if (st.empty()) cout<<"yes";
            else cout<<"no";
        cout<<endl;
    }
	return 0;
}
