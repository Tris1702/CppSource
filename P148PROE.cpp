#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n;
int tron(string s1,string s2,string s3)
{
    int dem=0;
    for(int i=1;i<=50;i++)
    {
        dem++;
        string tmp="";
        for(int j=0;j<n;j++) tmp=tmp+s2[j]+s1[j];
        if (tmp==s3) return dem;
        s1="",s2="";
        for(int j=0;j<n;j++) s1=s1+tmp[j];
        for(int j=n;j<tmp.length();j++) s2=s2+tmp[j];
    }
    return -1;
}
int main()
{
    while (1)
    {
        string s1,s2,s3;
        cin>>n;
        if (n==0) return 0;
        cin>>s1>>s2>>s3;
        cout<<tron(s1,s2,s3)<<endl;
    }
	return 0;
}
