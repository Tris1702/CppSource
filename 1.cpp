#include<iostream>
#include<vector>
#include<stdio.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    cout<<a[0]<<' ';
    cout<<a.front()<<' ';
    cout<<a.back();
    a.pop_back();
    cout<<' '<<a.back();
    return 0;
}
