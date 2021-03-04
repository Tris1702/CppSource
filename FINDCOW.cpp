#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0;
    int mo=0;
    long long res=0;
    while (i<s.length())
    {
        while (i<s.length()&&s[i]=='(')
        {
            mo++;
            i++;
        }
        if (mo>0) mo--;
        long long dem=0;
        while (i<s.length()&&s[i]==')')
        {
            dem++;
            i++;
        }
        if (dem>0)
        {
            dem--;
            res=res+mo*dem;
        }
    }
    cout<<res;
	return 0;
}
