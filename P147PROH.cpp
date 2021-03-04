#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
void sx(string &s,int d, int c)
{
    if(d>=c) return;
    int key=s[(d+c)/2],i=d,j=c;
    while (i<j)
    {
        while (s[i]<key) i++;
        while (s[j]>key) j--;
        if (i<=j)
        {
            int tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;
            i++;
            j--;
        }
    }
    sx(s,d,j);
    sx(s,i,c);
}
int main()
{
    int i=0;
    while (1)
    {
        string s1,s2;
        cin>>s1>>s2;
        if (s1=="END"&&s2=="END") return 0;
        i++;
        sx(s1,0,s1.length()-1);
        sx(s2,0,s2.length()-1);
        if(s1==s2) cout<<"Case "<<i<<": same"<<endl;
        else cout<<"Case "<<i<<": different"<<endl;
    }
	return 0;
}
