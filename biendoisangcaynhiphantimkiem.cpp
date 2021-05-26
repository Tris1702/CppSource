#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef struct Node
{
    int infor;
    Node *left;
    Node *right;
} * Tree;
Tree root;
void Init(Tree &root)
{
    root = NULL;
}
bool isLeft(int val, Tree root)
{
    return val < root->infor;
}
bool isRight(int val, Tree root)
{
    return val > root->infor;
}

Tree Insert(Tree root, int val)
{
    if (root == NULL)
    {
        root = new Node;
        root->infor = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (isLeft(val, root))
        root->left = Insert(root->left, val);
    else
        if (isRight(val, root))
            root->right = Insert(root->right, val);
    return root;
}
void showInOrder(Tree root)
{
    if (root == NULL) return;
    showInOrder(root->left);
    cout << root->infor <<' ';
    showInOrder(root->right);
}
void solve()
{
    Init(root);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, so;
        char c;
        cin >> a >> so >> c;
        if (root == NULL) root = Insert(root, a);
        root = Insert(root, so);
    }
    showInOrder(root);
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}