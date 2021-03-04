#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if ((n%(k+1))%2==0&&(n%(k+1))<k) cout<<"Hanako";
    else cout<<"Taro";
    return 0;
}
