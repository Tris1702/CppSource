#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s,a[202]={};
    vector<bool> F;
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    F.resize(n+1);
    F[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=a[i];j--)
        if (F[j]||F[j-a[i]]) F[j]=1;
    }
	if (F[s]) cout<<"YES";
	else cout<<"NO";
	return 0;
}
