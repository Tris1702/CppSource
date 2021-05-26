#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

struct node
{
    int infor;
    struct node *left;
    struct node *right;
};
typedef node *Tree;
void Init(Tree &T)
{
    T = NULL;
}
Tree GetNode()
{
    Tree p;
    p = new node();
    return p;
}
void FreeNode(Tree &p)
{
    delete p;
}
int isEmpty(Tree T)
{
    if (T == NULL) return 1;
    return 0;
}
Tree MakeNode(int x)
{
    Tree p;
    p = GetNode();
    p->infor = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
Tree Search(Tree T, int x)
{
    if(T == NULL) return NULL;
    if (T->infor == x) return T;
    Tree p = Search(T->left, x);
    if (p == NULL) p = Search(T->right, x);
    return p; 
}
Tree Make_Root(Tree T, int x)
{
    if (T == NULL) T = MakeNode(x);
    return T;
}
void Add_Left(Tree &T, int x, int y)
{
    Tree p, q;
    p = Search(T, x);
    if (p == NULL) return;
    else
        if ((p->left) != NULL) return;
        else
        {
            q = MakeNode(y);
            p->left = q;
        }
}
void Add_Right(Tree &T, int x, int y)
{
    Tree p,q;
    p = Search(T, x);
    if (p == NULL) return;
    else
        if ((p->right) != NULL) return;
        else
        {
            q = MakeNode(y);
            p->right = q;
        }
}
int countLeaf(Tree &T)
{
    if (T == NULL) return 0;
    if (T->left == NULL && T->right == NULL) return 1;
    else
        return countLeaf(T->right) + countLeaf(T->left); 
}
bool compareTrees(Tree &T1, Tree &T2)
{
	if (T1 == NULL) 
	{
		if (T1 == T2) return 1;
		else return 0;
	}
    if (T1->infor != T2->infor) return 0;
	bool left = compareTrees(T1->left, T2->left);
	bool right = compareTrees(T1->left, T2->left);
	return left && right;
}
void solve()
{
    int n, m;
    Tree root1, root2;
    Init(root1);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int u, v;
        char x;
        cin >> u >> v >> x;
        if (isEmpty(root1)) //cay rong
        {
            root1 = Make_Root(root1, u);
        }
        if (Search(root1, v) == root1)
        {
            Make_Root(root1, u);
        }
        if (x == 'L') Add_Left(root1, u, v);
        else Add_Right(root1, u, v);
    }
	Init(root2);
    cin >> m;
    for(int i = 0; i < n; i++)
    {
        int u, v;
        char x;
        cin >> u >> v >> x;
        if (isEmpty(root2)) //cay rong
        {
            root2 = Make_Root(root2, u);
        }
        if (Search(root2, v) == root2)
        {
            Make_Root(root2, u);
        }
        if (x == 'L') Add_Left(root2, u, v);
        else Add_Right(root2, u, v);
    }
	if (n!= m) 
	{
		cout << 0 << endl;
		return;
	}
    if (compareTrees(root1, root2)) cout <<  1 << endl;
	else cout <<  0 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}