#include <iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<string> ten;
vector<int> toan;
vector<int> ly;
vector<int> tin;
int maxx=0,n;
int main()
{
    freopen("E.inp","r",stdin);
    freopen("E.out","w",stdout);
    cin>>n;
    toan.resize(n,0);
    ly.resize(n,0);
    tin.resize(n,0);
    string s="";
    getline(cin,s);
    s.clear();
    for(int i=1;i<=n;i++)
    {
        getline(cin,s);
        ten.push_back(s);
        s.clear();
    }
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        toan[i]=d;
    }
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        ly[i]=d;
    }
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        tin[i]=d;
    }
    for(int i=0;i<n;i++)
    {
        int tong=toan[i]+ly[i]+tin[i];
        if (tong>maxx) maxx=tong;
    }
    for(int i=0;i<n;i++)
        if (toan[i]+ly[i]+tin[i]==maxx)
            cout<<ten[i]<<' '<<toan[i]<<' '<<ly[i]<<' '<<tin[i]<<endl;
    //for(int i=0;i<n;i++) cout<<ten[i]<<' '<<toan[i]<<' '<<ly[i]<<' '<<tin[i]<<endl;
    return 0;
}
