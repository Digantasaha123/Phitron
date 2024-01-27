#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);

    cout << root->val << " ";
    inorder(root->right);
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;

    // root != NULL hole push korbe, otherwise if er vitore NULL thakay condition execute hbe na
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        Node *left, *right;
        cin >> l >> r;
        if (l == -1)
            left = NULL;
      else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
int count_Node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_Node(root->left);
    int r = count_Node(root->right);
    return l + r + 1;
}
int count_leaf_node(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        int l = count_leaf_node(root->left);
        int r = count_leaf_node(root->right);
        return l + r;
    }
}   
int max_Height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_Height(root->left);
    int r = max_Height(root->right);
    return max(l, r) + 1;
}
int main()
{
    // Node *root = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *e = new Node(60);
    // Node *f = new Node(70);
    // Node *g = new Node(80);
    // Node *h = new Node(90);
    // Node *i = new Node(100);
    // root->left = a;
    // root->right = b;
    // a->left = c;
    // a->right = h;
    // b->right = d;
    // c->right = e;
    // h->right = i;
    // d->left = f;
    // d->right = g;

    // preorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    // inorder(root);
    // cout << endl;
    // level_order(root);

    Node *root = input_tree();
    level_order(root);
    cout << endl
         << count_Node(root) << endl;
    cout << endl
         << count_leaf_node(root) << endl;
    cout << endl
         << max_Height(root) << endl;

    return 0;
}