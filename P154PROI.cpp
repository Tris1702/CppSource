#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        bool kt=1;
        string s1,s2="";
        cin>>s1;
        for(int i=0;i<s1.length();i++) s2=s1[i]+s2;
        for(int i=1;i<s1.length();i++)
            if (fabs(s1[i]-s1[i-1])!=fabs(s2[i]-s2[i-1])) kt=0;
        if (kt) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
	return 0;
}
