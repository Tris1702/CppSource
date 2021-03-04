#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define mp make_pair
using namespace std;
char a[101][101]={};
vector<pair<int,int> > luu;
void cong(char &a)
{
    a+=1;
}
int main()
{
    while (1)
    {
        int n,m;
        cin>>n>>m;
        luu.resize(0);
        if (n==0&&m==0) return 0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            if (c=='.') a[i][j]='0';
            else
            {
                a[i][j]='*';
                luu.push_back(mp(i,j));
            }
        }
        for(int k=0;k<luu.size();k++)
        {
            int i=luu[k].first,j=luu[k].second;
            if (i-1>0)
            {
                if (a[i-1][j-1]!='*'&&j-1>0) a[i-1][j-1]+=1;
                if (a[i-1][j+1]!='*'&&j+1<=m) a[i-1][j+1]+=1;
                if (a[i-1][j]!='*') a[i-1][j]+=1;
            }
            if (i+1<=n)
            {
                if (a[i+1][j-1]!='*'&&j-1>0) a[i+1][j-1]+=1;
                if (a[i+1][j+1]!='*'&&j+1<=m) a[i+1][j+1]+=1;
                if (a[i+1][j]!='*') a[i+1][j]+=1;
            }
            if (a[i][j-1]!='*'&&j-1>0) a[i][j-1]+=1;
            if (a[i][j+1]!='*'&&j+1<=m) a[i][j+1]+=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++) cout<<a[i][j];
            cout<<endl;
        }
    }
	return 0;
}
