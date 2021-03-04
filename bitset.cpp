/*
    Tinh nhanh:
        x*2=x<<1 He 10: 1234 -> 123 (1234/0)
        x/2=x>>1
        x<<k = x* 2^k
        x>>k = x/ 2^k
        x & (2^k-1) = chia du lay k bit phai nhat cua x (hay chia du cho 2^k)
            (x & y = x % (y+1))
        Cac thao tac tren bit
            getbit(x,b): Lay bit thu b cua x
            bit on(x,b): bat bit thu b trong x
            bit of(x,b):
            setbit(x,b,v): gan tri v cho bit thu b trong x
                VD: x=1101001, bit thu b tuong ung voi 2^b
*/
#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
typedef long long LL;
int GetBit(LL x,int b) 
{
    /*
        return value of b-th in x
        x&1=x
    */
    return ((x>>b)&1);
}//GetBit
int Bitswitch(LL x, int b)
{
    /*
        
    */
    return (x^(1<<b));
}

int BitOff(LL x,int b)
{
    return x&(~(1<<b));
}//BitOff

int BitOn(LL x, int b)
{
    return (x|(1<<b));
}// BitOn
int SetBit(LL x, int b,int v)
{
    return (v==1)? BitOn(x,b): BitOff(x,b);
}
void Printf(LL x, int base=10, const char *msg="") // nei goi Printf(x) thi base mac dinh la 10
{
    cout<<msg;
    if (x==0) cout<<0;
    string s="";
    while (x)
    {
        s=(char)((x%base)+'0')+s;
        x/=base;
    }
    cout<<s;
}//Printf
void solve()
{
    int n=123;
    cout<<"\n n="<< n<<endl;
    Printf(n,2,"\nBase 2: ");
    int b;
    while (1)
    {
        cout<<"\n Off bit [press <0 to stop]:";
        fflush(stdin);
        cin>>b;
        if (b<0) break;
        int y=BitOff(n,b);
        Printf(y,2,"\n Base 2: ");
    }

}//solve
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}