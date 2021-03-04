#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char chuan(char c)
{
    if (c<='Z'&&c>='A') c=c+('a'-'A');
    return c;
}
int main()
{
    int dd[250]={};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char c;
        cin>>c;
        c=chuan(c);
        dd[c]++;
    }
    for(int i='a';i<='z';i++)
        if (dd[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
	return 0;
}
