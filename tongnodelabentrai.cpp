#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;

struct node
{
    int infor;
    node * left = NULL;
    node * right = NULL;
};
typedef node * Tree;
map <int, Tree> sourceNode;
void Init(Tree &T)
{
    T = NULL;
}
bool isEmpty(Tree & T)
{
    return (T == NULL);
}
Tree MakeNode(int x)
{
    Tree p = new node();
    p->infor = x;
    return p;
}
void Add_Left(int x, int y)
{
    sourceNode[x]->left = sourceNode[y];
}
void Add_Right(int x, int y)
{
    sourceNode[x]->right = sourceNode[y];
}
bool isLeaf(Tree &p)
{
    return (p != NULL && p->left == NULL && p->right == NULL);
}
int sumLeft(Tree &T)
{
    int res = 0;
    if (T == NULL) return res;
    if (isLeaf(T->left)) res += T->left->infor;
    res += sumLeft(T->left) + sumLeft(T->right);
    return res;
} 
void solve()
{
    int n;
    cin >> n;
    sourceNode.clear();
    Tree root;
    Init(root);
    for(int i = 0; i < n; i++)
    {
        int u, v; char side;
        cin >> u >> v >> side;
        if (sourceNode.find(u) == sourceNode.end())
        {
            sourceNode[u] = MakeNode(u);
        }
        if (isEmpty(root))
        {
            root = sourceNode[u];
        }
        if (side == 'L')
        {
            sourceNode[v] = MakeNode(v);
            // Tree utmp = sourceNode[u];
            // Tree vtmp = sourceNode[v];
            Add_Left(u, v);
        }
        if (side == 'R')
        {
            sourceNode[v] = MakeNode(v);
            Add_Right(u, v);
        }
    }
    cout << sumLeft(root) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}