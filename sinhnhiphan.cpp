#include<bits/stdc++.h>

using namespace std;
int n;
void sinh(int spt,string s)
{
    if (spt>n)
    {
        cout<<s<<endl;
        return;
    }
    for(char i='0';i<='1';i++)
    {
        sinh(spt+1,s+i);
    }
}
int main()
{
    cin>>n;
    sinh(1,"");
	return 0;
}
