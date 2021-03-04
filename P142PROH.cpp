#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,m,res=0;
    char a[11][11]={};
    bool luui[11]={},luuj[11]={};
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if (a[i][j]=='S')
            {
                luui[i]=1;
                luuj[j]=1;
            }
        }
    for(int i=1;i<=n;i++)
        if (luui[i]==0)
            for(int j=1;j<=m;j++)
            {
                res++;
                a[i][j]='#';
            }
	for(int j=1;j<=m;j++)
        if (luuj[j]==0)
            for(int i=1;i<=n;i++)
                if (a[i][j]=='.') res++;
    cout<<res;
	return 0;
}
