#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string s,res="";
int mu(int m)
{
    if (m==1) return 1;
    if (m==2) return 2;
    if (m==3) return 4;
}
int main()
{
    cin>>s;
    while (s.length()%3!=0) s='0'+s;
    int n=s.length()/3;
    for(int i=1;i<=n;i++)
    {
        int tmp=0;
        for(int j=1;j<=3;j++)
        {
            if (s[s.length()-1]=='1') tmp+=mu(j);
            s.erase(s.length()-1,1);
        }
        char c=tmp+'0';
        res=c+res;
    }
    cout<<res;
	return 0;
}
