#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int ti,teo,gti=0,gteo=0,giua=0;
    cin>>ti>>teo;
    if (ti<teo)
    {
        for(int i=1;i<=ti;i++) gti++;
        for(int i=teo;i<=6;i++) gteo++;
    }
    if (ti>teo)
    {
        for(int i=ti;i<=6;i++) gti++;
        for(int i=1;i<=teo;i++) gteo++;
    }
    if ((max(ti,teo)-min(ti,teo)-1)%2!=0)
    {
        int tmp=((max(ti,teo)-min(ti,teo)-1)-1)/2;
        giua=1;
        gti+=tmp;
        gteo+=tmp;
    }
    else
    {
        int tmp=(max(ti,teo)-min(ti,teo)-1)/2;
        gti+=tmp;
        gteo+=tmp;
    }
    cout<<gti<<' '<<giua<<' '<<gteo;
	return 0;
}
