#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool kt(string s)
{
    for(int i=0;i<s.length();i++)
    {
        int tmp1=(s[i]-'0'),tmp2=i+1;
        if (tmp1%2!=0&&tmp2%2==0) return 0;
        if (tmp1%2==0&&tmp2%2!=0) return 0;
    }
    return 1;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s;
        cin>>s;
        if (kt(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
