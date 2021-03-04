#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int th(int tg,int r,int g)
{
    int kt=0;
    while (1)
    {
        if (kt==0)
        {
            if (tg>=r)
            {
                tg-=r;
                kt=1;
            }
            else return r-tg-1;
        }
        else
        {
            if (tg>g)
            {
                tg-=g;
                kt=0;
            }
            else return 0;
        }
    }
}
int main()
{
    int tg=0,n,l;
    cin>>n>>l;
    int d,r,g,trc=0;
    for(int i=1;i<=n;i++)
    {
        cin>>d>>r>>g;
        tg+=d-trc;
        int tmp=th(tg,r,g);
        if(tmp>0) tg+=tmp;
        trc=d;
    }
    cout<<tg+l-d;
	return 0;
}
