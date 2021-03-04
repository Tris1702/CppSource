#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
void dao(vector<char> &tmp)
{
    vector<char> res;
    FORD(i,tmp.size()-1,0)
    {
        res.push_back(tmp[i]);
    }
    tmp=res;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,vector<char> > >f1,f2;
    FORT(i,1,n)
    {
        string s;
        vector<char> tmp;
        cin>>s;
        FORT(j,0,s.length()-1) tmp.push_back(s[j]);
        sort(tmp.begin(),tmp.end());
        f1.push_back(mp(i,tmp));
        dao(tmp);
        f2.push_back(mp(i,tmp));
    }

    FORT(i,1,n)
    {

    }
	return 0;
}
