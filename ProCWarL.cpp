#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string s,k;
int mod(string s,int a)
{
    int res=0;
    FORT(i,0,s.length()-1)
    {
        res=res*10+(s[i]-'0');
        res%=a;
    }
    return res;
}
void dp(string &s)
{
    int ktmp=mod(k,26);
    FORT(i,0,s.length())
    {
        int tmp=s[i],kk=ktmp;
        if (tmp+kk>'z')
        {
            tmp='a';
            kk-='z'-s[i];
            s[i]=(char)(tmp+kk-1);
        }
        else s[i]=(char)(tmp+kk);
    }
}
void dt(string &s)
{
    int ktmp=mod(k,26);
    FORT(i,0,s.length())
    {
        int tmp=s[i],kk=ktmp;
        if (tmp-kk<97)
        {
            tmp='z';
            kk-=s[i]-'a';
            s[i]=(char) (tmp-kk+1);
        }
        else s[i]=(char) (tmp-kk);
    }
}
int main()
{
    cin>>s;
    char c=s[0];
    s.erase(0,1);
    if (s.length()==0) return 0;
    int i=0;
    while (i<s.length())
    {
        while (i<s.length()&&!(s[i]>='0'&&s[i]<='9')) i++;
        while (i<s.length()&&s[i]>='0'&&s[i]<='9')
        {
            k+=s[i];
            s.erase(i,1);
        }
    }
    if (s.length()==0) return 0;
    if (c=='R') dp(s);
	else dt(s);
	cout<<s;
	return 0;
}
