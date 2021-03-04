#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string chuyen(int a)
{
    string kq="";
    while(a>0)
    {
        char c=(a%10)+'0';
        kq=c+kq;
        a/=10;
    }
    return kq;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s,res="";
        cin>>s;
        int i=0;
        while (i<s.length())
        {
            int dem=1;
            while (i+1<s.length()&&s[i]==s[i+1])
            {
                i++;
                dem++;
            }
            res=res+chuyen(dem)+s[i];
            i++;
        }
        cout<<res<<endl;
    }
	return 0;
}
