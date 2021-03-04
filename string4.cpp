#include<bits/stdc++.h>

using namespace std;
bool kt(int a,int b,int c)
{
    int tmp=a*100+b*10+c;
    return (tmp%8==0);
}
bool kt(int a,int b)
{
    int tmp=a*10+b;
    return (tmp%8==0);
}
void solve()
{
    int res=0;
    string s;
    cin>>s;
    vector<int> sum(s.length(),0);
    for(int i=0;i<s.length();i++) sum[i]=s[i]-'0';
    for(int i=1;i<s.length();i++) sum[i]+=sum[i-1];
    for(int i=0;i<s.length();i++)
        for(int j=i;j<s.length();j++)
            if ((i>0&&(sum[j]-sum[i-1])%3!=0)||(i==0&&sum[j]%3!=0))
            {
                int tmp=j-i+1;
                if (tmp==1&&s[j]=='8') 
                {
                    res++;
                }
                if (tmp==2&&kt(s[i]-'0',s[j]-'0')) 
                {
                    res++;
                }
                if (tmp>=3&&kt(s[j-2]-'0',s[j-1]-'0',s[j]-'0')) 
                {
                    res++;
                }
            }
    cout<<res<<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) solve();
    return 0;
}