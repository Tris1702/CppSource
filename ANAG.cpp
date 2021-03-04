#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
void sx(string &s)
{
    for(int i=0;i<s.length();i++)
        for(int j=i+1;j<s.length();j++)
        if (s[j]<s[i])
    {
        char tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s1,s2;
        cin>>s1>>s2;
        sx(s1);
        sx(s2);
        if (s1==s2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
	return 0;
}
