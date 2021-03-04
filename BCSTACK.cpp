#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stack>
using namespace std;

int main()
{
    string s;
    stack <int> x;
    while (cin>>s)
    {
        if (s=="init")
            while (!x.empty()) x.pop();
        if (s=="push")
        {
            int so;
            cin>>so;
            x.push(so);
        }
        if (s=="pop")
            if (!x.empty()) x.pop();
        if (s=="top")
            if (x.empty()) cout<<-1; else cout<<x.top();
        if (s=="size") cout<<x.size();
        if (s=="empty")
            if (x.empty()) cout<<1; else cout<<0;
        if (s=="end") return 0;
        cout<<endl;
    }
	return 0;
}
