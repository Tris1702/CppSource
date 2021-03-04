#include <iostream>
#include<string>
using namespace std;
int dem1(string s)
{
    int dem=0;
    for(int i=0;i<s.length();i++)
        if (s[i]=='1') dem++;
    return dem;
}
int dem0(string s)
{
    int dem=0;
    for(int i=0;i<s.length();i++)
        if (s[i]=='0') dem++;
    return dem;
}

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int x=0,tmp=0,res=n;
        for(int j=1;j<=n;j++)
        {
            string s;
            cin>>s;
            int s1=dem1(s);
            int s0=dem0(s);
            if (s.length()%2!=0) tmp++;
            else
            {
                if (s1%2!=0&&s0%2!=0)
                {
                    x++;
                    res--;
                }
            }
        }
        if (tmp>x) res+=x;
        else
        {
            res+=tmp;
            res+=(x-tmp)/2*2;
        }
        cout<<res<<endl;
    }
    return 0;
}
