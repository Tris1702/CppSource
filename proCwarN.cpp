#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<=b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;

int doi(char c)
{
    if (c=='M') return 1000;
    if (c=='D') return 500;
    if (c=='C') return 100;
    if (c=='L') return 50;
    if (c=='X') return 10;
    if (c=='V') return 5;
    if (c=='I') return 1;
}
bool tt(char c1,char c2)
{
    return (doi(c1)>=doi(c2));
}
int main()
{
    string s;
    long long res=0;
    cin>>s;
    while (s.length()>0)
    {
        if (s.length()>1)
        {
            if (tt(s[0],s[1]))
            {
                res+=doi(s[0]);
                s.erase(0,1);
            }
            else
            {
                res+=doi(s[1])-doi(s[0]);
                s.erase(0,2);
            }
        }
        else
        {
            res+=doi(s[0]);
            s.erase(0,1);
        }
    }
    cout<<res;
	return 0;
}
