/*
    Co day nguyen duong, tim day co sum=n?
    4=1111=112=121=211=22=13=31
    He thuc S(n) = so cach...
    Phan loai cac cach thanh cac tap ko giao nhau
    Xet 1st term
    1{111,12,21,3} S(3)=4
    2{11,2}        S(2)=2
    3{1}           S(1)=1
    4{}            S(0)=1
    S(n)=S(n-1)+S(n-2)+...+S(n-n) = 2^(n-1)
    CN: S(n+1)=2^n
    DS :2^n=1<<(n-1)
*/
/*
    Prog Robot: co the nhay 1,2,...m buoc
    Co bao nhieu cac de nhay n duong thang
    n=4: 1111 121 211..

    Adward
    7 4th
    1 2 3 4
    7 0 0 0 - TH1
    6 1 0 0 - TH2
    5 1 1 0 - TH3
    5 2 0 0 - TH4
    4 3 0 0 - TH5
    4 2 1 0 - TH6
    4 1 1 1 - TH7
    3 3 1 0 - TH8
    3 2 1 1 - TH 9
    3 2 2 0 - TH10
    2 2 2 1 - TH11
        -----> Sang tao trong thuat toan va lap trinh N.X.H

    * Cho biet 10 chu so cuoi cua tong sau:
        1^1 + 2^2 + 3^3 + ...+ 1000^1000
            in ra 10 chu so cuoi
    -> tinh nhanh last10 (Sum{x*x|1<=x<=1000})
        %10 --> lay chu so cuoi
            quy tac dong du:
                (123456+1234^2020)%3=? 
                bieu thuc chi chua phep +, -, *, ^ co the dan % m vao moi cho cuar bieu thuc
                (123456%3+(1234%3)^2020)%3= 1
        -----> Project Euler
    NOTE: (10^10)%m= 0;
    -> (20^20)%m = (2^10 . 10^10) ^2= 0^2=1;
*/
/*
    100! co bao nhieu chu so 0
    1.2.3.4.5.6.7.8.9.10
    2:8, 5:2
        DS(2',5'); (2' la so lan xuat hien cua 2)
*/
#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second


#include<bitset>
using namespace std;
typedef long long LL;
LL m=1e10;
//z=a^b %m
//Indian Method = Divide conquer
//nhan nhanh
/*

     z = a * b
        33  25'
        16  50
        8   100
        4   200
        2   400
        1   800'
        0   1600
        ---------
        sum y'=825
*/
 LL Plus (LL a, LL b) //z=(a+b)%m
{
    return (a>m-b)? a-(m-b): a+b;
}
 LL Mult(LL a, LL b) //z=(a*b)%m
{
    LL z=0;
    while (a)
    {
        if (a&1) z=(z+b)%m;
        a>>=1; //a/=2
        b=(b+b)%m; 
    }
    return z;
}
 LL Exp(LL a, LL b) //z=(a^b)%m
{
    LL z=1;
    while (b)
    {
        if (b&1) z=Mult(z,a);
        b>>=1;
        a=Mult(a,a);
    }
    return z;
}
 LL Exp( LL b) //z=(a^b)%m
{
    return Exp(b,b);
}
int S(int n, int p) //so lan xuat hien nhan tu p trong n!
{
    int d=0;
    while (n)
    {
        n=n/p;
        d+=n;
    }
    return d;
}
void solve()
{
    LL z=1;
    for(int x=2;x<=1000;x++)
        if (x%10)
        {
            z=Plus(z,Exp(x));
        }
    cout<<"\n Total : "<<z;

}//solve
int main()
{
    //solve();
    //100! co bao nhieu so 0
    //->cout<<"\n"<<S(100,5);
    //100! co chia het cho 7^k? max k=?
    //-> cout<"\n"<<S(100,7);
    return 0;
}