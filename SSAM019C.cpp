#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;

vector<int> tohopkt(vector<int> a,int n)
{
    int trc=n+1,vt=a.size()-1;
    while (a[vt]==trc-1) 
    {
        trc=a[vt];
        vt--;
    }
    if (vt>=0)
    {
        bool dd[n+1]={};
        a[vt]=a[vt]+1;
        FORT(i,0,vt+1) dd[a[vt]]=1;
        FORT(i,vt+1,a.size())
            FORT(j,a[i-1]+1,n+1) 
                if (dd[j]==0)
                {
                    a[i]=j;
                    dd[j]=1;
                    break;
                }
    }
    return a;
}
bool cuoi(vector<int> a,int n)
{
    int j=n;
    for(int i=a.size()-1;i>=0;i--)
        if (a[i]==j) j--;
        else return 0;
    return 1;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<k;i++)
        {
            int so;
            cin>>so;
            a.push_back(so);
        }
        if (cuoi(a,n)) cout<<k<<endl;
        else
        {
            int res=0;
            vector<int> b=tohopkt(a,n);
            bool dd[n+1]={};
            for(int i=0;i<b.size();i++) dd[b[i]]=1;
            for(int i=0;i<a.size();i++)
                if (dd[a[i]]==0) res++;
            cout<<res<<endl;
        }
    }
	return 0;
}
