#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    int s4=0;
    cin>>s;
    for(int j=0;j<s.length();j++)
        if (s[j]!='1'&&s[j]!='4')
    {
        cout<<"NO";
        return 0;
    }
    if (s[0]=='4')
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='1')
        {
            if (s4>2)
            {
                cout<<"NO";
                return 0;
            }
            s4=0;
        }
        else s4++;
    }
    if (s4<=2) cout<<"YES"; else cout<<"NO";
	return 0;
}
