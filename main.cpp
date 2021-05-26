#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
vector<int> b(101);
void prepare()
{
    for(int i = 0; i <= 100; i++) b[i] = i*i;
}

void init()
{

}

void solve()
{
    int A, B;
    cin >> A >> B;
    for(int i = 0; i <=100; i++)
        for(int j = i+1; j <=100; j++)
            if (i+j == A && b[i]+b[j] == B)
            {
                cout << i<<j
                break;
            }
}
int main()
{
    prepare();
    int t = 1;
    cin >> t;
    while (t--) solve();
}