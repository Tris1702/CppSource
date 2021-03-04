#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int dichuyen(char a, char b)
{
    if (b>a)
    {
        int tmp1=b-a;
        int tmp2=a-'A'+('Z'-b)+1;
        return min(tmp1,tmp2);
    }
    if (a==b) return 0;
    if (a>b)
    {
        int tmp1=a-b;
        int tmp2='Z'-a+(b-'A')+1;
        return min(tmp1,tmp2);
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s;
        long long res=0;
        char vt='A';
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            res+=dichuyen(vt,s[i]);
            vt=s[i];
        }
        cout<<res<<endl;
    }
	return 0;
}
