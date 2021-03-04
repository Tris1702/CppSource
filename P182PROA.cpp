#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int c,v0,v1,a,l,ngay=0,giatoc=0;
    cin>>c>>v0>>v1>>a>>l;
    c-=v0;
    ngay=1;
    while (c>0)
    {
        c+=l;
        giatoc+=a;
        int v=v0+giatoc;
        c-=min(v,v1);
        ngay++;
    }
    cout<<ngay;
	return 0;
}
