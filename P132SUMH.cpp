#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c,d,t1,t2,t3,s[1001]={};
    cin>>a>>b>>c>>d;
    cin>>t1>>t2>>t3;
    int i=1;
    int aa=a,cc=c,dd=0,bb=0;
    for(int i=1;i<=1000;i++)
    {
        if (aa==0&&bb==0) aa=a;
        if (cc==0&&dd==0) cc=c;
        if (aa>0)
        {
            s[i]++;
            aa--;
            if (aa==0) bb=b;
        }
        else
        {
            if (bb>0) bb--;
        }
        if (cc>0)
        {
            s[i]++;
            cc--;
            if (cc==0) dd=d;
        }
        else
        {
            if (dd>0) dd--;
        }
    }
    if (s[t1]==1) cout<<"one";
    if (s[t1]==2) cout<<"both";
    if (s[t1]==0) cout<<"none";
    cout<<endl;
	if (s[t2]==1) cout<<"one";
    if (s[t2]==2) cout<<"both";
    if (s[t2]==0) cout<<"none";
    cout<<endl;
    if (s[t3]==1) cout<<"one";
    if (s[t3]==2) cout<<"both";
    if (s[t3]==0) cout<<"none";
	return 0;
}
