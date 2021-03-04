#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
bool kt(int n,int le)
{
    if (n%2==0&&(le==0||le==2)) return 1;
    if (n%2!=0&&(le==1||le==3)) return 1;
    return 0;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int dd[250]={};
        string s;
        int dem=0;
        cin>>s;
        for(int i=0;i<s.length();i++) dd[s[i]]++;
        for(int i='a';i<='z';i++)
            if (dd[i]%2!=0) dem++;
        if (kt(s.length(),dem)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
	return 0;
}
