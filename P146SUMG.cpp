#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int r,c,a,b;
    char f[505][505]={};
    cin>>r>>c>>a>>b;
    int vti=1,vtj=1;
    for(int i=1;i<=r;i++)
    {
        vtj=1;
        for(int j=1;j<=c;j++)
        {
            char c;
            cin>>c;
            for(int ii=0;ii<a;ii++)
                for(int jj=0;jj<b;jj++) f[vti+ii][vtj+jj]=c;

            vtj+=b;
        }
        vti+=a;
    }
    for(int i=1;i<=r*a;i++)
    {
        for(int j=1;j<=c*b;j++) cout<<f[i][j];
        cout<<endl;
    }
	return 0;
}
