#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char dich(char c,int k)
{
    if (c=='_') c='Z'+1;
    if (c=='.') c='Z'+2;
    char tmp=c+k;
    if (tmp>'Z'+2)
    {
        k=tmp-('Z'+2)-1;
        tmp='A';
        tmp=tmp+k;
    }
    if (tmp=='Z'+1) tmp='_';
    if (tmp=='Z'+2) tmp='.';
    return tmp;
}
int main()
{
    while (1)
    {
        int n;
        string s,res="";
        cin>>n;
        if (n==0) return 0;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--)
            res=res+dich(s[i],n);
        cout<<res<<endl;
    }

	return 0;
}
