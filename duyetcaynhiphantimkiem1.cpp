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
void showPostOrder(Tree root)
{
    if (root == NULL) return;
    showPostOrder(root->left);
    showPostOrder(root->right);
    cout << root->infor <<' ';
}
void solve()
{
    Init(root);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int so;
        cin >> so;
        root = Insert(root, so);
    }
    showPostOrder(root);
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}