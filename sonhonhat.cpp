#include<bits/stdc++.h>
using namespace std;
int s, d;
void Run()
{
    cin>>s>>d;
    int a[1001]={};
    int k=d;
    if(d*9<s) cout<<"-1";
    else 
    {
        if((d-1)*9+1>=s) 
        {
            a[0]=1;
            s-=1;
            d--;
            while(d)
            {
                if(s>=9) 
                {
                    a[d]=9;
                    s-=9;
                }
                else 
                {
                    a[d]=s;
                    s=0;
                }
                d--;
            }
            for(int i=0; i<k; i++) cout<<a[i];
        }
        else
        {
            cout<<s-(d-1)*9;
            for(int i=1; i<k; i++) cout<<"9";
        }
        
    }
    cout<<"\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}