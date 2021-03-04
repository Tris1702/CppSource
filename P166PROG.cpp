#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
int xoay(char a, char b)
{
    if (b<a) return min('9'-a+b-'0'+1,a-b);
    if (b==a) return 0;
    if (b>a) return min(b-a,a-'0'+'9'-b+1);
}
int main()
{
    int n,res=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<=s1.length();i++)
        res+=xoay(s1[i],s2[i]);
    cout<<res;
	return 0;
}
