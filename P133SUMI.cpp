#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int r=sqrt(n);
    while (n%r!=0) r--;
    int c=n/r;
    char a[r+1][c+1]={};
    int ii=1,jj=1;
    for(int i=0;i<s.length();i++)
    {
        if (ii>r)
        {
            jj++;
            ii=1;
        }
        a[ii][jj]=s[i];
        ii++;
    }
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++) cout<<a[i][j];
	return 0;
}
