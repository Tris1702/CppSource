#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
bool cmp(string a, string b)
{
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    return a>b;
}
string mult(string a, int b)
{
    string res="";
    int i=a.length()-1,nho=0;
    while (i>=0)
    {
        int cs=(a[i]-'0')*b+nho;
        nho=cs/10;
        cs%=10;
        res=char(cs+'0')+res;
        i--;
    }
    if (nho>0) res=char(nho+'0')+res;
    return res;
}
string minu(string a,string b)
{
    string kq="";
    while (a.length()<b.length()) a='0'+a;
    while (a.length()>b.length()) b='0'+b;
    if (a<b)
    {
        string tmp=a;
        a=b;
        b=tmp;
    }
    int nho=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int tmp=0;
        if (a[i]-'0'<b[i]-'0'+nho)
        {
            tmp=(10+(a[i]-'0'))-(b[i]-'0'+nho);
            nho=1;
        }
        else
        {
            tmp=(a[i]-'0')-(b[i]-'0'+nho);
            nho=0;
        }
        char c=tmp+'0';
        kq=c+kq;
    }
    while(kq.length()>0&&kq[0]=='0') kq.erase(0,1);
    return kq;
}
char Thuong (string &a, string b)
{
    int i=1;
    for(;i<=9;i++)
        if (cmp(mult(b,i),a)) break;
    i--;
    a=minu(a,mult(b,i));
    return char(i+'0');
}
string divi(string a, string b)
{
    string res="",tmp="";
    if (a==b) return "1";
    FORT(i,0,a.length())
    {
        tmp+=a[i];
        if (!cmp(tmp,b)) 
        {
            if (tmp==b) 
            {
                res+='1';
                tmp="";
            }
            else res+='0';
        }
        else
            res+=Thuong(tmp,b);
    }
    while (res.length()>1&&res[0]=='0') res.erase(0,1);
    return res;
}
void solve()
{
    string a,b;
    cin>>a>>b;
    cout<<divi(a,b)<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while (t--) solve();
}