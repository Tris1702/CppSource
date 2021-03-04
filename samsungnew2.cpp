/*
    Chia de tri (Divide & Conquer)
        Mau chot nam o ky thuat chia: k=?, Stop,...
    Chia 2,3,....
    Tot nhat cac phan khong giao nhau

    Problem 1: 27 gold balls, only 1 ball is fake which is lighter than other.
                Use minumum time scale to find out the fake one
        -> Sol: divide by 3
            Ex: 27->(G9)
                        -> A,B,C if A==B-> fake in C
                           if A<B -> fake in A
                           if A>B -> fake in B
                9->(G3)
                3->(G1)
        -> Time: O(logN)
    Problem 2: Doan so
        x in [d...c] find x by asking Y/N questions, use minimun questions
    Problem 3: Word counting
        -> Binary search tree O(NlogN)
        -> Sort O(NlogN)
    Problem 4: Tim doan ngan nhat co sum =k
        a= 1 1 3 4 7 2 5 3 8 1 4 2 10 8 9, k=10
        -> Sol
            Sliding window
            DC: s[i]=sum [a[0]..a[i]]
                voi moi s[i], tim s[i]+k (Binary search)
    Problem 5: Give permutation (hoan vi) n elements 0...n-1
                a beauty segment is a segment have k elements and all elements [0..k]
        Ex: 9 1 0 2 3 5 4 6 8 7
            -> 0
            -> 1 0
            -> 1 0 2
            -> 1 0 2 3
            -> 1 0 2 3 5 4
            -> 1 0 2 3 5 4 6
            -> 1 0 2 3 5 4 6 8 7
            -> 9 1 0 2 3 5 4 6 8 7
        Sol:
            Expanding window:
                (Find the missing number)
                    Begin: L=R=position of 0 elements
                    Loop
                    {
                        x= number missing in L-R
                        expand L,R to add x
                        scan x+1... find the missing number
                    }
*/

#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
int Pro2(int d,int c)
{
    int mid;
    while (d<c)
    {
        mid=(d+c)/2;
        cout<< "\n x > "<<mid<<" ?: [y/n] : ";
        fflush(stdin);
        char ans=cin.get();
        if (ans=='y') d=mid+1;
        else
        {
            if (ans=='n') c=mid;
        }
        
    } //while
    return d;
} // Pro2

void solve()
{
    
} //sovle
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}