/*
    Ky thuat Two_phases
    Phase1: Scan e loi cu phap viet dung quy tac Sytax Error
        input: (m+p)*(d-c) 
        output: mp+ dc-*
*/
#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string OP="+-*/";
//Phrase 2 pol = mp+dc-*
bool Var(char c) //check if c is a variable
{
    return (c>='a'&&c<='z');
} //Val
bool Op (char c) //check if c is a operator
{
    for(int i=0;i<OP.length();i++)
    {
        if (c==OP[i]) return 1;
    } //for
    return 0;
} //Op
int Deg(char op) //muc do uu tien cua phep toan
{
    switch(op)
    {
        case '*':
        case ':':
            return 100;
        case '+':
        case '-':
            return 300;
        default:
            return 1000;
    } //switch
} //Deg
string Compiler(string e)
{
    string pol="";
    char st[e.length()];
    int p=-1;
    st[++p]='#';
    for(int i=0;i<e.length();++i)
    {
        if (e[i]=='(')
        {
            st[++p]=e[i];
            continue;
        }
        if (e[i]==')')
        {  
            while (st[p]!='(')
            {
                pol+=st[p--];
            } // while
            --p;
            continue;
        }
        if (Var(e[i]))
        {
            pol+=e[i];
            continue;
        }
        if (Op(e[i]))
        {
            while (Deg(st[p])<=Deg(e[i]))
            {
                pol+=st[p--];
            } //while
            st[++p]=e[i];
            continue;
        }//if
    } //for
    while (st[p]!='#')
    {
        pol+=st[p--];
    } //while
    return pol;
} //Compiler
int Exe(string pol)
{
    int st[pol.length()];
    int p=-1;
    for(int i=0;i<pol.length();i++)
    {
        if (Var(pol[i]))
        {
            st[++p]=pol[i]-'a';
        } //if
        else
            if (Op(pol[i]))
            {
                switch (pol[i]){
                    case '+':
                        st[p-1]+=st[p];
                        --p;
                        break;  
                    case '-':
                        st[p-1]-=st[p];
                        --p;
                        break; 
                    case '*':
                        st[p-1]*=st[p];
                        --p;
                        break; 
                    case '/':
                        st[p-1]/=st[p];
                        --p;
                        break;   
                } //switch
            } //if
    } //for
    return st[0];
} //Exe
void solve()
{
    //e= (x * d - b * e * f) + (a - b * t)
    //thu tu cac chu cai khi di ra giu nguyen
    string e="(x*d-b*e*f)+(a-b*t)";
    string pol=Compiler(e);
    cout<<e<<':'<<pol<<'='<<Exe(pol);

} //solve
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}