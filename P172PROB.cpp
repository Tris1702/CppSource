#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
void dao(string &s)
{
    string tmp="";
    for(int i=0;i<s.length();i++) tmp=s[i]+tmp;
    s=tmp;
}
int main()
{
    int n,k,vt=-1;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='T') vt=i;
        if (s[i]=='G'&&vt!=-1) dao(s);
    }
    vt=0;
    while (s[vt]!='G') vt++;
    while (1)
    {
        vt+=k;
        if (vt>=s.length())
        {
            cout<<"NO";
            return 0;
        }
        if (s[vt]!='#')
        {
            if (s[vt]=='T')
            {
                cout<<"YES";
                return 0;
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
	return 0;
}
