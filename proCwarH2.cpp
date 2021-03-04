#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    int T;
    cin>>T;
    FORT(t,1,T)
    {
        int ngay=0;
        double a,b,c;
        cin>>a>>b>>c;
        double btmp=1;
        c=(c/a)*(b/10000)+1;
        while (btmp<c)
        {
            ngay++;
            btmp*=1+b/10000;
        }
        if (ngay>12)
        {
            int nam=floor(ngay/12);
            cout<<nam<<" nam"<<' '<<ngay-nam*12<<" thang.";
        }
        else cout<<ngay<<" thang.";
        cout<<endl;
    }
	return 0;
}
