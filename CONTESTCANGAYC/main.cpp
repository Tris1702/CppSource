#include <bits/stdc++.h>

using namespace std;
int mod=1e9+7;
int poww(int n)
{
    long long res=1,tmp=2;
    for(int i=n;i;i>>=1)
    {
        if (i&1) res=(res*tmp)%mod;
        tmp=(tmp*tmp)%mod;
    }
    return res;
}
int tinh(int n)
{
    int tmp=poww(n)-1;
    return tmp;
}
int main()
{
    string s;
    int dema=0,res=0;
    cin>>s;
    int i=0;
    while (i<s.length())
    {
        if (s[i]=='a')
        {
            dema++;
            i++;
        }
        else
        {
            res=(res%mod+tinh(dema))%mod;
            i++;
        }
    }
    cout<<res<<endl;
    return 0;
}
