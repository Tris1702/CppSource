#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
bool cmp(string a,string b)
{
    string tmp1=a+b;
    string tmp2=b+a;
    return (tmp1>tmp2);
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        vector<string> a;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            a.push_back(s);
        }
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<a.size();i++) cout<<a[i];
        cout<<endl;
    }
	return 0;
}
