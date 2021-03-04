#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
string chuyen(int so)
{
    string res="";
    while (so>0)
    {
        char c=(so%10)+'0';
        res=c+res;
        so/=10;
    }
    return res;
}
string tcs(string n)
{
    int tong=0;
    while (n.length()>0)
    {
        tong+=n[n.length()-1]-'0';
        n.erase(n.length()-1,1);
    }
    return chuyen(tong);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string so;
        cin>>so;
        while (so.length()>1) so=tcs(so);
        if (so=="9") cout<<1;
        else cout<<0;
        cout<<endl;
    }
	return 0;
}
