#include<bits/stdc++.h>

using namespace std;
vector<string> x;
void tach(string s)
{
    int i=0;
    while (i<s.length())
    {
        while (i<s.length()&&s[i]>='a'&&s[i]<='z') i++;
        string so="";
        bool dd=0;
        while (i<s.length()&&s[i]>='0'&&s[i]<='9')
        {
            so=so+s[i];
            i++;
            dd=1;
        }
        if (dd)
        {
            while (so.length()<100) so='0'+so;
            x.push_back(so);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int t=1;t<=n;t++)
    {
        string s;
        cin>>s;
        tach(s);
    }
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
    {
        while (x[i][0]=='0'&&x[i].length()>1) x[i].erase(0,1);
        cout<<x[i]<<endl;
    }
	return 0;
}
