#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int n,k,dem=0;
    cin>>n>>k;
    string s;
    cin>>s;
    if (k>n)
    {
        cout<<"No";
        return 0;
    }
    int d=0,c=s.length()-1;
    while (d<=c)
    {
        if (s[d]!=s[c]) dem++;
        d++;
        c--;
    }
    if (k==0&&dem==0)
    {
        cout<<"Yes";
        return 0;
    }
    if (s.length()%2==0)
    {
        if (k==dem||(k>dem&&k<=dem*2)) cout<<"Yes";
        else cout<<"No";
    }
    else
    {
        if (k==dem|(k>dem&&k<=dem*2+1)) cout<<"Yes";
        else cout<<"No";
    }

    return 0;
}
