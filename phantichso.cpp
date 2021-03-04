#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
vector<vector<int> > luu;
vector<string> f;
bool cmp(vector<int> a, vector<int> b)
{
    if (a.size()>b.size()) return 1;
    if (a.size()<b.size()) return 0;
    FORT(i,0,a.size())
    {
        if (a[i]>=b[i]) return 1;
    }
    return 0;
}
void sinh(int spt,string s,int n)
{
    if (spt==n)
    {
        f.push_back(s);
        return;
    }
    for(char i='0';i<='1';i++)
    {
        sinh(spt+1,s+i,n);
    }
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        luu.resize(0);
        f.resize(0);
        int n;
        cin>>n;
        sinh(0,"",n-1);
        FORT(i,0,f.size())
        {
            vector<int> temp;
            int so=1;
            FORT(j,0,f[i].length()+1)
            {
                if (f[i][j]=='1') so+=1;
                else
                {
                    temp.push_back(so);
                    so=1;
                }
            }
            bool ok=1;
            FORT(j,1,temp.size())
                if (temp[j]<temp[j-1]) 
                {
                    ok=0;
                    break;
                }
            if (ok) luu.push_back(temp);
        }
        FORT(i,0,luu.size())
        {
            sort(luu[i].begin(),luu[i].end());
        }
        sort(luu.begin(),luu.end(),cmp);
        FORD(i,luu.size(),0)
        {
            cout<<'(';
            FORD(j,luu[i].size(),1) cout<<luu[i][j]<<' ';
            cout<<luu[i][0];
            cout<<") ";
        }   
        cout<<endl;
    }
    return 0;
}