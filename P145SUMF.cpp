#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int r,c,a,b;
    char x[1001][1001]={};
    cin>>r>>c>>a>>b;
    int dem;
    bool kt=1;
    for(int i=1;i<=a*r;i+=a)
    {
        if (kt==0) dem=0;
        else dem=1;
        for(int j=1;j<=b*c;j+=b)
        {
            char cc;
            dem++;
            if (dem%2==0) cc='X';
            else cc='.';
            for(int ii=0;ii<a;ii++)
                for(int jj=0;jj<b;jj++) x[i+ii][j+jj]=cc;
        }
        kt=!kt;
    }
    for(int i=1;i<=r*a;i++)
    {
        for(int j=1;j<=c*b;j++) cout<<x[i][j];
        cout<<endl;
    }
	return 0;
}
