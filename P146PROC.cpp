#include<iostream>
#include<stdbool.h>
using namespace std;
int main()
{
    int s[5]={},dem=0;
    bool dd[5]={};
    for (int i=1;i<=4;i++)
        cin>>s[i];
    for(int i=1;i<=3;i++)
        for(int j=i+1;j<=4;j++)
        if (dd[j]==0&&s[i]==s[j])
        {
            dem++;
            dd[j]=1;
        }
    cout<<dem;
    return 0;
}
