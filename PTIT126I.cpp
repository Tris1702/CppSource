#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    string a,b;
    int luua,luub;
    cin>>a>>b;
    char x[30][30]={};
    for(int i=0;i<b.length();i++)
        for(int j=0;j<a.length();j++) x[i][j]='.';
    for(int i=0;i<a.length();i++)
        for(int j=0;j<b.length();j++)
        if (a[i]==b[j])
    {
        luua=i;
        luub=j;
        i=a.length();
        break;
    }
    for(int i=0;i<a.length();i++) x[luub][i]=a[i];
    for(int i=0;i<b.length();i++) x[i][luua]=b[i];
    for(int i=0;i<b.length();i++)
    {
        for(int j=0;j<a.length();j++) cout<<x[i][j];
        cout<<endl;
    }
	return 0;
}
