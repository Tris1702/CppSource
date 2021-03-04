#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define F first
#define S second
#define mp make_pair
using namespace std;

int main()
{
    int n;
    vector< pair<int,int> > ghe;
    cin>>n;
    cout<<"+------------------------+"<<endl;
    char a[5][28]={};
    for(int i=1;i<=4;i++)
        for(int j=1;j<=27;j++) a[i][j]='.';
    for(int i=1;i<=4;i++)
    {
        a[i][1]=a[i][24]=a[i][26]='|';
        if (i==1||i==4) a[i][27]=')';
    }
    a[1][25]='D';
    for(int i=1;i<=4;i++)
        for(int j=1;j<=26;j++)
            if (i!=3&&a[i][j]=='.'&&a[i][j+1]=='.'&&(a[i][j-1]=='.'||a[i][j-1]=='|')) a[i][j]='#';
    a[3][2]='#';
    a[2][27]=a[3][27]=' ';
    a[3][24]='.';
    for(int j=2;j<=22;j+=2)
        for(int i=1;i<=4;i++)
            if (i==3)
            {
                if(j==2)
                    ghe.push_back(mp(3,2));
            }
            else ghe.push_back(mp(i,j));
    int vt=-1;
    for(int i=1;i<=n;i++)
    {
        vt++;
        a[ghe[vt].F][ghe[vt].S]='O';
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=27;j++) cout<<a[i][j];
        cout<<endl;
    }
    cout<<"+------------------------+"<<endl;
	return 0;
}
