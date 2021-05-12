#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n,k;
void sinh(int spt, string s, char pre)
{
    if (spt>k)
    {
        cout << s << endl;
        return;
    }
    for(char i=pre;i<n+'A';i++)
        {
            sinh(spt+1, s+i, i+1);
        }
}
int main()
{
    int T;
    cin>>T;
    FORT(t,0,T)
    {
        cin>>n>>k;
        sinh(1, "",'A');
    }
    return 0;
}
