#include <bits/stdc++.h>
using namespace std;
int ans = 0;
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
int max_Height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_Height(root->left);
    int r = max_Height(root->right);
    return max(l, r) + 1;
}
int count_Node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_Node(root->left);
    int r = count_Node(root->right);
    return l + r + 1;
}

int main()
{
    
    Node *root = input_tree();
    int c = count_Node(root);
    int level = max_Height(root);
    if(pow(2,level)-1==c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}