/*
    Only 1 array to solve many problems
    1. Sieve of Eratosthenes
    2. x<1M : both x and x' are prime (x'= reverse(x))
    3. x<=5M, find the next prime of X 
    4. CutPrime
        x is prime, cut x in to 2 prime numbers 
            x=abcd --> abc|d,ab|cd,a|bcd,abcd
*/
#include<iostream>
#include<cmath>
#include<bitset> // array each element is 1 bit

using namespace std;
const int MN=5000000;
bitset<MN+1> p; //p is a array of size MN, p[i]=1 -> i is a prime 
void Pro1(int n)
{
    int sn=int(sqrt(n));
    cout<<"\n Input n= "<<n<<" square = "<<sn;
    p.set(); // set all 1
    p[0]=p[1]=0;
    for(int i=4;i<=n;i+=2) p[i]=0;
    for(int i=3;i<=sn;i+=2)
    {
        if (p[i]) //delete all mul of i from i*i
        {
            for(int j=i*i;j<=n;j+=i) p[j]=0;
        }
    } //for
    for(int i=2;i<=n;i++)
        if (p[i]) cout<<"\n "<<i;
} //Pro1
void solve()
{
    Pro1(200);
}//solve
int main()
{
    solve();
    return 0;
}