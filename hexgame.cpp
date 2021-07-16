/*
Chua AC
Tu tuong:

 1 2 3
8 0 0 4 
 7 6 5
Turn-left

 8 1 3
7 0 2 4
 6 0 5

Turn-right
 
 1 0 2
8 6 0 3
 7 5 4

-------decode------
0123456789
1238004765
Turn-left
8137024605
--> s = a[3]+a[0]+a[2]+a[7]+a[4]+a[1]+a[6]+a[8]+a[5]+a[9]
Turn-right
1028603754
--> s = a[0]+a[4]+a[1]+a[3]+a[8]+a[5]+a[2]+a[7]+a[9]+a[6]

---------------------------------------------------------------------
Reverse
 1 2 3
8 0 0 4 
 7 6 5
Reverse-turn-left

 2 0 3
1 0 6 4
 8 7 5

Reverse-turn-right
 
 1 3 4
8 2 0 5
 7 0 6

--------decode------
0123456789
1238004765
Reverse-turn-left
2031064875
--> s = a[1]+a[5]+a[2]+a[0]+a[4]+a[8]+a[6]+a[3]+a[7]+a[9]
Reverse-turn-right
1348205706
--> s = a[0]+a[2]+a[6]+a[3]+a[1]+a[5]+a[9]+a[7]+a[4]+a[8]
*/


#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
int tl[] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int tr[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int rtl[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int rtr[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};

string turn_left(string a)
{
    string x = "";
    for(int i = 0; i < 10; i++)
        x += a[tl[i]]; 
    return x;
}
string turn_right(string a)
{
    string x = "";
    for(int i = 0; i < 10; i++)
        x += a[tr[i]]; 
    return x;
}
string reverse_turn_left(string a)
{
    string x = "";
    for(int i = 0; i < 10; i++)
        x += a[rtl[i]]; 
    return x;
}
string reverse_turn_right(string a)
{
    string x = "";
    for(int i = 0; i < 10; i++)
        x += a[rtr[i]]; 
    return x;
}
int bfs(string s)
{
    queue<pair<string,int> > q1, q2;
    set<string> dd;
    map<string, int> sb;

    //from begin
    // dd.insert(s);
    q1.push({s, 0});
    while (!q1.empty())
    {
        string u = q1.front().F;
        int step = q1.front().S;
        q1.pop();
        // if (u == s && step > 0) return step;
        dd.insert(u);
        sb[u] = step;
        if (u == s && step > 0)
        {
            int so;
            so++;
        }

        if (dd.find(u) != dd.end()) continue;
        if (step == 18) continue;
        string v;

        //turn-left
        v = turn_left(u);
        q1.push({v, step+1});
        // cout << v << endl;

        //turn-right
        v = turn_right(u);
        q1.push({v, step+1});
        // cout << v << endl;
    }

    //from end
    q2.push({s, 0});
    while (!q2.empty())
    {
        string u = q2.front().F;
        int step = q2.front().S;
        q2.pop();
        if (dd.find(u) != dd.end())
        {
            // for(set<string>::iterator it = dd.begin(); it != dd.end(); it++)
            // {
            //     cout << *it << ' '<< sb[*it] << endl;
            //     if (sb[*it] == 0) break;
            // }
            cout << u << endl;
            return step + sb[u] - 1;
        }
        dd.insert(u);
        sb[u] = step;
        if (step == 18) continue;
        string v;

        //reverse-turn-left
        v = reverse_turn_left(u);
        q2.push({v, step+1});
        // cout << v << endl;

        //reverse-turn-right
        v = reverse_turn_right(u);
        q2.push({v, step+1});
        // cout << v << endl;
    }
    return -1;
}

void solve()
{
    string input="";
    for(int i = 0; i < 10; i++) 
    {
        int so;
        cin >> so;
        input += to_string(so);
    }
    cout << bfs(input) << endl;

}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--) solve();
}