#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

int a[]={1, 3, 5, 11, 11, 11, 11, 12};
int LB(int l, int r, int x)
{
    if (x > a[r]) return r+1;
    while (r > l)
    {
        int mid = (l+r)/2;
        if (a[mid] < x)
        {
            l = mid+1;
        }
        else
            if (a[mid] > x) r = mid;
            else
            {
                while (a[mid] == x) mid --;
                return mid + 1;
            }
    }
    return r;
}
int main()
{
    cout << LB(0, 7, 13);
}