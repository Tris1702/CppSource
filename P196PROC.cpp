#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char winn(char c)
{
    if (c=='B') return 'G';
    if (c=='K') return 'B';
    return 'K';
}
int main()
{
    int n;
    cin>>n;
    string res="";
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        if (s1[i]==s2[i]) res+=winn(s1[i]);
        else
        {
            if (winn(s1[i])==s2[i]) res+=s2[i];
            else res+=s1[i];
        }
    }
    cout<<res;
	return 0;
}
