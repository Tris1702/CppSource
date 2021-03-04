#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{

    int a,b,c;
    int hs[101]={};
    int tg=0;
    cin>>a>>b>>c;
    for(int i=1;i<=3;i++)
    {
        int bd,kt;
        cin>>bd>>kt;
        for(int j=bd;j<kt;j++) hs[j]++;
    }
    for(int i=1;i<=100;i++)
    {
        if (hs[i]==1) tg+=a;
        if (hs[i]==2) tg+=b*2;
        if (hs[i]==3) tg+=c*3;
    }
    cout<<tg;
	return 0;
}
