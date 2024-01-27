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
void left_tree(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left)
        left_tree(root->left, v);
    else
        left_tree(root->right, v);
    v.push_back(root->val);
}
void right_tree(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    v.push_back(root->val);
    if (root->right)
        right_tree(root->right, v);
    else
        right_tree(root->left, v);
}
int main()
{
    Node *root = input_tree();
    if(root->left==NULL && root->right == NULL)
    {
        cout<<root->val;
        return 0;
    }
    vector<int> v;
    if (root->left)
        left_tree(root, v);

    if (root->right)
    {
        if (!v.empty())
            v.erase(v.end() - 1); 
            right_tree(root, v);
    }
   
    for (int c : v)
        cout << c << " ";
    return 0;
}