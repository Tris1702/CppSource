#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
bool cmp(string a,string b)
{
    if (a[0]=='-'&&b[0]!='-') return 1;
    if (a[0]!='-'&&b[0]=='-') return 0;
    bool dau=0;
    if (a[0]=='-')
    {
        a.erase(0,1);
        b.erase(0,1);
        dau=1;
    }
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    if (dau)
    {
        if (a<b) return 0;
        return 1;
    }
    else
    {
        if (a<b) return 1;
        return 0;
    }
}
int main()
{
    string s;
    while (getline(cin,s))
    {
        vector<string>so,tu;
        vector<bool> tt;
        if (s==".") return 0;
        int i=0,j=0;
        while (i<s.length())
        {
            while (i<s.length()&&(s[i]==' '||s[i]==','||s[i]=='.')) i++;
            j=i;
            if (i==s.length()) break;
            while (i<s.length()&&s[i]!=','&&s[i]!=' '&&s[i]!='.') i++;
            bool dd=0;
            string stmp="";
            FORT(k,j,i-1)
            {
                if (s[k]>='a'&&s[k]<='z') dd=1;
                stmp+=s[k];
            }
            if (dd) tu.push_back(stmp);
            else so.push_back(stmp);
            tt.push_back(dd);
        }
        sort(tu.begin(),tu.end());
        sort(so.begin(),so.end(),cmp);
        int ii=0,jj=0;
        FORT(i,0,tt.size()-1)
        {
            if (tt[i])
            {
                cout<<tu[ii];
                ii++;
            }
            else
            {
                cout<<so[jj];
                jj++;
            }
            if (i<tt.size()-1) cout<<", ";
            else cout<<".\n";
        }
    }
	return 0;
}
