#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
void giam(int &a,vector<int> &f)
{
    int res=0;
    while (a%2==0)
    {
        a/=2;
        res++;
    }
    f.push_back(res);
    res=0;
    while (a%3==0)
    {
        a/=3;
        res++;
    }
    f.push_back(res);
    res=0;
    while (a%5==0)
    {
        a/=5;
        res++;
    }
    f.push_back(res);
}
int main()
{
    int a,b,res=0;
    vector<int> fa,fb;
    cin>>a>>b;
    if (a==b)
    {
        cout<<0;
        return 0;
    }
    giam(a,fa);
    giam(b,fb);
    if (a!=b) cout<<-1;
    else
    {
        for(int i=0;i<=2;i++) res+=max(fa[i],fb[i])-min(fa[i],fb[i]);
        cout<<res;
    }
	return 0;
}
