#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n<=2)
    {
        cout<<-1;
        return 0;
    }
    int a[n+1]={};
    for (int i=1;i<=n;i++) a[i]=i;
    swap(a[3],a[1]);
    for (int i=1;i<=n;i++) cout<<a[i]<<' ';
    return 0;
}
