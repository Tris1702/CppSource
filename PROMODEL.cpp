#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct model
{
    string name;
    int w,h;
    model()
    {
        name="";
        w=h=0;
    }
};
bool hon(model a, model b)
{
    if (a.w> b.w) return 1;
    if (a.w<b.w) return 0;
    if (a.h<b.h) return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<model> ts;
    for(int i=1;i<=n;i++)
    {
        model tmp;
        cin.ignore();
        getline(cin,tmp.name);
        cin>>tmp.w>>tmp.h;
        ts.push_back(tmp);
    }
    model tmp=ts[0];
    for(int i=1;i<n;i++)
        if (hon(ts[i],tmp)) tmp=ts[i];
    cout<<tmp.name;
    return 0;
}
