#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
char doi(char c)
{
    return (c=='-')? ('+'): ('-');
}
string bodau(string s)
{
    s='+'+s;
    stack <char> st1,st2;
    st2.push('+');
    for(int i=0;i<s.length();i++)
    {
        if (s[i]>='a'&&s[i]<='z') st1.push(s[i]);
        else
        {
            if (s[i]=='+'||s[i]=='-')
            {
                if (st2.top()=='-') st1.push(doi(s[i])); 
                else st1.push(s[i]);
            }
            if (s[i]=='(') st2.push(st1.top());
            if (s[i]==')') st2.pop();
        }
    }
    string res="";
    while (st1.size())
    {
        res=st1.top()+res;
        st1.pop();
    }
    res.erase(0,1);
    return res;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    s1=bodau(s1);
    s2=bodau(s2);
    (s1==s2)? (cout<<"YES\n"): (cout<<"NO\n");
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}