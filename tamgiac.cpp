#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=(int)a-1;i>=b;i--)

using namespace std;
vector <int> a;
bool check(int a, int b, int c)
{
    return (a+b>c && a+c>b && b+c>a);
}
int try1()
{
    int it=0, dem=0, res=0, i=0;
    while (i < a.size())
    {
        int min1=1e9, min2=1e9, max1=-1e9, max2=-1e9, luumin, luumax;
        for(int j=it; j < i; j++) 
        {
            if (min1 > a[j])
            {
                min1 = a[j];
                luumin = j;
            }
            if (max1 < a[j])
            {
                max1 = a[j];
                luumax = j;
            }
        }
        for(int j=it; j < i; j++) 
        {
            if (a[j] < min2 && j != luumin)
                min2 = a[j];

            if (a[j] > max2 && j != luumax)
                max2 = a[j];
        }

        bool check1 = check(min1, min2, a[i]);
        bool check2 = check(max1, max2, a[i]); 
        if ((check1 && check2) || i-it<2)
        {
            dem++;
            i++;
        }
        else 
        {
            it++;
            dem--;
        }
        if (it>=i) 
        {
            dem = 0;
            i++;
        }
        res=max(res,dem);
    }
    if (res<=2) res=0;
    return res;
}
int try2()
{
    int it=0, dem=0, res=0, i=0;
    while (i < a.size())
    {
        if (i-it<2)
        {
            dem++;
            i++;
            continue;
        }
        bool check1 = check(a[it], a[it+1], a[i]);
        bool check2 = check(a[i-2], a[i-1], a[i]); 
        if ((check1 && check2))
        {
            dem++;
            i++;
        }
        else 
        {
            it++;
            dem--;
        }
        if (it>=i) 
        {
            dem = 0;
            i++;
        }
        res=max(res,dem);
    }
    if (res<=2) res=0;
    return res;
}
void solve()
{
    int n;
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if (n <= 1000) cout << try1();
    else 
    cout << try2();
}
int main()
{
    int t=1;
    //cin>>t;
    while (t--) solve();
}