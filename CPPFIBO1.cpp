#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int F[1005]={},mod=1e9+7;
int fibo(int n)
{
    if (F[n]!=-1) return (F[n]%mod);
    F[n]=(fibo(n-1)%mod+fibo(n-2)%mod)%mod;
}
int main()
{
    int T;
    //cin>>T;
    for(int i=0;i<=1000;i++) F[i]=-1;
    F[0]=0;
    F[1]=1;
    int k=fibo(1000);
    //for(int i=0;i<=10;i++) cout<<F[i]<<' ';/*
    /*for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        cout<<F[n]<<endl;
    }*/
	return 0;
}
