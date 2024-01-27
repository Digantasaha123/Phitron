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
        return -1;
    int l = max_Height(root->left);
    int r = max_Height(root->right);
    return max(l, r) + 1;
}
void level(Node *root, int level, vector<int> &v, int x)
{
    if(root==NULL) return;
    queue<pair<Node *, int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();
        int lv = f.second;
        Node* node = f.first;
        if(lv==x) v.push_back(node->val);
        if(node->left) q.push({node->left, lv+1});
        if(node->right) q.push({node->right, lv+1});

    }
}
int main()
{
    Node *root = input_tree();
    int l;
    cin >> l;

    if (root == NULL || l>max_Height(root)) cout<<"Invalid"<<endl;
    else{
        vector<int> v;
         level(root, 0,v,l);
        for(int c : v) cout<<c<<" ";
    }
    
    return 0;
}