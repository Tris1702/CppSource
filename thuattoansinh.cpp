#include<bits/stdc++.h>

using namespace std;
int n;
bool rev(string s)
{
    string res = "";
    for(char c: s) res = c+res;
    return (s == res);
}
vector<string> res;
void sinh(int spt,string s)
{
    if (spt>n)
    {
        if (rev(s)) res.push_back(s);
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
    // cout << res.size()<<endl;
    for(string s: res) 
    {
        for(char c: s) cout << c<<' ';
        cout<< endl;
    }
	return 0;
}
