#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    int nhom=min(n,m/2);
    int namt=n-nhom,nut=m-nhom*2;
    while (namt+nut<k&&nhom>0)
    {
        nhom--;
        namt++;
        nut+=2;
    }
    cout<<nhom;
	return 0;
}
