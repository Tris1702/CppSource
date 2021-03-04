/*
    Tom and Jerry Proplem
        -> Binary search Tree
    
*/
#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
const int MN=1024;
const char *fn="TJ.input";
char t[MN]; // elements of tree
int Code(string s)
{
    int c=1;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='0') c=c*2;
        else c=c*2+1;
    } //for
    return c;
} //Code
void solve()
{
    ifstream f(fn);
    int n;
    char ch;
    string s;
    f>>n;
    memset(t,'#',sizeof(t));
    cout<<"\n n="<<n;
    for(int i=1;i<=n;i++)
    {
        f>>ch>>s;
        cout<<'\n'<<ch<<' '<<s;
        t[Code(s)]=ch;
    } //for
    /*for(int i=0;i<100;i++)
    {
        cout<<'\n'<<i<<':'<<t[i];
    } //for
    */
   f>>s;
   cout<<"\n Decoding "<<s<<"...\n ";
    f.close();
    int c=1; // Root
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='0') c=c*2;
        else c=c*2+1;
        /*
        c=c<<1 - (s[i]-'0');
        */
       if (t[c]!='#') 
        {
           cout<<t[c];
           c=1;
        }
    } //for
} //solve
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}