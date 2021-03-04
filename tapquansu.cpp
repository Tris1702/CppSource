#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

vector<int> tohopkt(vector<int> a,int n)
{
    int i;
    if (a[a.size()-1]<n) i=a.size()-1;
    else
    {
        i=a.size()-2;
        while (i>=0&&a[i]+1==a[i+1]) i--;
    }
    for(int j=a[i]+1;i<a.size();j++)
    {
        a[i]=j;
        i++;
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
