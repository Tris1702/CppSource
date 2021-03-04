#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int n;
bool dd[10]={};
string res="";
void doi(int so)
{
    res="";
    while (so>0)
    {
        while (so>=1000)
        {
            res+='M';
            so-=1000;
        }
        if (so>=900)
        {
           res+="CM";
           so-=900;
        }
        while (so>=500)
        {
            res+='D';
            so-=500;
        }
        if (so>=400)
        {
           res+="CD";
           so-=400;
        }
        while (so>=100)
        {
            res+='C';
            so-=100;
        }
        if (so>=90)
        {
           res+="XC";
           so-=90;
        }
        while (so>=50)
        {
            res+='L';
            so-=50;
        }
        if (so>=40)
        {
           res+="XL";
           so-=40;
        }
        while (so>=10)
        {
            res+='X';
            so-=10;
        }
        if (so>=9)
        {
           res+="IX";
           so-=9;
        }
        while (so>=5)
        {
            res+='V';
            so-=5;
        }
        if (so>=4)
        {
           res+="IV";
           so-=4;
        }
        while (so>=1)
        {
            res+='I';
            so--;
        }
    }
    cout<<res<<'\n';
}
void hoanvi(int vt,int so)
{
    if (vt>n)
    {
        doi(so);
        return;
    }
    FORT(i,1,n)
        if (dd[i]==0)
        {
            dd[i]=1;
            hoanvi(vt+1,so*10+i);
            dd[i]=0;
        }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    hoanvi(1,0);
	return 0;
}
