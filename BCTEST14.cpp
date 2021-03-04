#include<iostream>
using namespace std;
int main()
{
    int a,b,v,dem;
    cin>>a>>b>>v;
    dem=v/(a-b);
    v-=dem*(a-b);
    while (v+(a-b)<a)
    {
        v+=(a-b);
        dem--;
    }
    cout<<dem+1;
    return 0;
}
