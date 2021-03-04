#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int main()
{
    string stmp;
    char c;
    vector<char> s;
    cin>>stmp>>c;
    FORT(i,0,stmp.length()-1) s.push_back(stmp[i]);
    int res=upper_bound(s.begin(),s.end(),c)-s.begin();
    if (s[res-1]==c) cout<<res-1;
    else cout<<res;
	return 0;
}
