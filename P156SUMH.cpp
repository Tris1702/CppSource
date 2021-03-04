#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d,c,m;
    if (n%2==0)
    {
        d=n/2;
        m=n/2;
        c=d+1;
    }
    else
    {
        d=n/2+1;
        m=n/2+1;
        c=d;
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<d;j++) cout<<'*';
        for(int j=d;j<=c;j++) cout<<'D';
        for(int j=c+1;j<=n;j++) cout<<'*';
        d--;
        c++;
        cout<<endl;
    }
    d++;
    c--;
    for(int i=1;i<=n;i++) cout<<'D';
    cout<<endl;
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<d;j++) cout<<'*';
        for(int j=d;j<=c;j++) cout<<'D';
        for(int j=c+1;j<=n;j++) cout<<'*';
        d++;
        c--;
        cout<<endl;
    }
	return 0;
}
