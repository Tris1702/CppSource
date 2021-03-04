#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;
bool cmp(char a,char b)
{
    return (a>b);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<char> f;
    for(int i=0;i<s2.length();i++) f.push_back(s2[i]);
    sort(f.begin(),f.end(),cmp);
    int j=0;
    for(int i=0;i<s1.length();i++)
    {
        if (j==f.size()) break;
        if (s1[i]==f[j]) continue;
        if (s1[i]<f[j])
        {
            s1[i]=f[j];
            j++;
        }
    }
    cout<<s1;
	return 0;
}
