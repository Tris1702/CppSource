#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
int s,n;
vector<pair<int,int> > x;
bool cmp(pair<int,int> &a, pair<int,int> &b)
{
    return (a.F<=b.F);
}
void sx()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if (x[j].F<x[i].F)
    {
        pair<int,int> tmp=x[i];
        x[i]=x[j];
        x[j]=tmp;
    }
}
int main()
{
    cin>>s>>n;
    for(int i=1;i<=n;i++)
    {
        pair<int,int> tmp;
        cin>>tmp.F>>tmp.S;
        x.push_back(tmp);
    }
    sx();
    for(int i=0;i<n;i++)
    {
        if (s>x[i].F) s+=x[i].S;
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
	return 0;
}
