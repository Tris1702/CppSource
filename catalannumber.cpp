#include<bits/stdc++.h>
using namespace std;
string divi(string a,int b)
{
    string res="";
    int so=0;
    for(int i=0;i<a.length();i++)
    {
        so=so*10+(a[i]-'0');
        res+=(so/b)+'0';
        so%=b;
    }
    while (res[0]=='0'&&res.length()>=2) res.erase(0,1);
    return res;
}
string mult(string a, string b)
{
    vector<int> res(a.length()+b.length(),0);
    int vt1=0,vt2=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        int nho=0;
        int na=a[i]-'0';
        vt2=0;
        for(int j=b.length()-1;j>=0;j--)
        {
            int nb=b[j]-'0';
            int sum=na*nb+nho+res[vt1+vt2];
            nho=sum/10;
            res[vt1+vt2]=sum%10;
            vt2++;
        }
        if (nho>0) res[vt1+vt2]+=nho;
        vt1++;
    }
    int i=res.size()-1;
    while (i>=0&&res[i]==0) i--;
    if (i==-1) return "0";
    string s="";
    while (i>=0) s+=res[i--]+'0';  
    return s;
}
string tostring(int n)
{
    string res="";
    while (n>0)
    {
        int tmp=n%10;
        res=char(tmp+'0')+res;
        n/=10;
    }
    return res;
}
void solve()
{
    int n;
    cin>>n;
	n--;
    if (n==0) 
    {
        cout<<1;
        return;
    }
    if (n==1)
    {
        cout<<2;
        return;
    }
    string trc="1";
    for(int i=1;i<=n;i++)
        trc=divi(mult(trc,tostring(2*(2*i+1))),i+2);
    cout<<trc<<endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
    solve();
    return 0;
}