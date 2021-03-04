#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long LL;
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
void solve()
{
    string a,b;
    cin>>a>>b;
    cout<<mult(a,b)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}