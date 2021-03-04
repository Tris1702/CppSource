#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int n,k,res=1e9;
string s;
int F[100001][26]={};
bool dd[26]={};
int main()
{
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        dd[c-'a']=1;
        F[1][c-'a']=c-'a'+1;
    }
    for(int i=2;i<=k;i++)
        for(int j=0;j<26;j++)
            if (dd[j])
            {
                int tmp=1e9;
                for(int k=0;k<=j-2;k++)
                    if (dd[k]) tmp=min(tmp,F[i-1][k]);
                F[i][j]=tmp+j+1;
            }
    for(int i=0;i<n;i++) res=min(res,F[k][s[i]-'a']);
    if (res==1e9) cout<<-1;
    else cout<<res;
	return 0;
}
