#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    int res=0,vt=0;
    cin>>s;
    bool dd=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='L')
        {
            if (dd) dd=0;
            vt--;
        }
        if (s[i]=='R')
        {
            if (dd)
            {
                vt=-vt;
                dd=0;
            }
            vt++;
        }
        if (s[i]=='?')
        {
            if (vt>0) vt++;
            else
                if (vt<0) vt--;
                else
                {
                    dd=1;
                    vt--;
                }
        }
        int tmp=fabs(vt);
        res=max(res,tmp);
    }
    cout<<res;
	return 0;
}
