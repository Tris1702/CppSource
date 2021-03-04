#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
char doi(char c)
{
    if ((c<='C'&&c>='A')||(c<='c'&&c>='a')) return '2';
    if ((c<='F'&&c>='D')||(c<='f'&&c>='d')) return '3';
    if ((c<='I'&&c>='G')||(c<='i'&&c>='g')) return '4';
    if ((c<='L'&&c>='J')||(c<='l'&&c>='j')) return '5';
    if ((c<='O'&&c>='M')||(c<='o'&&c>='m')) return '6';
    if ((c<='S'&&c>='P')||(c<='s'&&c>='p')) return '7';
    if ((c<='V'&&c>='T')||(c<='v'&&c>='t')) return '8';
    if ((c<='Z'&&c>='W')||(c<='z'&&c>='w')) return '9';
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        string s1,s2="";
        cin>>s1;
        for(int i=0;i<s1.length();i++) s1[i]=doi(s1[i]);
        for(int i=0;i<s1.length();i++) s2=s1[i]+s2;
        if (s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
