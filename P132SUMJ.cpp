#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#define mp make_pair
#define F first
#define S second
using namespace std;
int x;
vector<int> csx;
vector<pair<int,bool> >cs;
void prepare(int x)
{
    while (x>0)
    {
        cs.push_back(mp(x%10,1));
        x/=10;
    }
    for(int i=cs.size()-1;i>=0;i--) csx.push_back(cs[i].F);
    for(int i=0;i<cs.size();i++)
        for(int j=i+1;j<cs.size();j++)
        if (cs[j].F<cs[i].F)
    {
        pair<int,bool> tmp=cs[i];
        cs[i]=cs[j];
        cs[j]=tmp;
    }
}
void dd(int a)
{
    for(int i=0;i<cs.size();i++)
        if (cs[i].F==a&&cs[i].S==1)
        {
            cs[i].S=0;
            return;
        }
}

int main()
{
    cin>>x;
    prepare(x);
    int j;
    for(j=1;j<csx.size();j++)
        if (csx[j]>csx[j-1]) break;
    if (j<csx.size())
    {
        while (csx[csx.size()-1]<=csx[csx.size()-2])
        {
            dd(csx[csx.size()-1]);
            csx.pop_back();
        }
        dd(csx[csx.size()-1]);
        csx.pop_back();
        while (csx.size()<cs.size())
        {
            int tmp=csx[csx.size()-1];
            dd(tmp);
            csx.pop_back();
            for(int i=0;i<cs.size();i++)
                if (cs[i].F>tmp&&cs[i].S==0)
                {
                    csx.push_back(cs[i].F);
                    cs[i].S=1;
                    break;
                }
            for(int i=0;i<cs.size();i++)
                if (cs[i].S==0)
                    csx.push_back(cs[i].F);
        }
        for(int i=0;i<csx.size();i++) cout<<csx[i];
    }
    else cout<<0;
	return 0;
}
