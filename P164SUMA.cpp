#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    string s,s2;
    int res=1,res2=0;
    cin>>n;
    cin>>s;
    for(int i=2;i<=n;i++)
    {
        string tmp;
        cin>>tmp;
        if (tmp==s) res++;
        else
        {
            s2=tmp;
            res2++;
        }
    }
    if (res>res2) cout<<s;
    else cout<<s2;
	return 0;
}
