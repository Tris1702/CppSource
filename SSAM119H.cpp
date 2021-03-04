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
        string s;
        cin>>s;
        if (s.length()<2) s='0'+s;
        int tmp=(s[s.length()-2]-'0')*10+(s[s.length()-1]-'0');
        if (tmp%4==0) cout<<4;
        else cout<<0;
        cout<<endl;
    }
	return 0;
}
