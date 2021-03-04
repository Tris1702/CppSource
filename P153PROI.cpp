#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string chuanhoa(string s)
{
    for(int i=0;i<s.length();i++)
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+('a'-'A');
    return s;
}
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int t=1;t<=T;t++)
    {
        string s,res="";
        int dem=0;
        getline(cin,s);
        int tanso[255]={};
        s=chuanhoa(s);
        for(int i=0;i<s.length();i++)
            if (s[i]!=' ')
        {
            if (tanso[s[i]]==0) res=res+s[i];
            tanso[s[i]]++;
        }
        for(int i=0;i<=250;i++)
            if (tanso[i]>1) dem+=tanso[i];
        cout<<dem<<' '<<res<<endl;
    }
	return 0;
}
