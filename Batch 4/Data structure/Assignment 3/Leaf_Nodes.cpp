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
void solve(Node *root, vector<int>&v)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) v.push_back(root->val);
    solve(root->left,v);
    solve(root->right,v);
}
int main()
{
    vector<int> v;
    Node *root = input_tree();
    solve(root,v);
    sort(v.begin(), v.end(),greater<int>());
    for(int x : v) cout<<x<<" ";

    return 0;
}