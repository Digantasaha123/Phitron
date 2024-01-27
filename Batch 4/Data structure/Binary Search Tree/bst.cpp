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
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
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
void insert(Node *&root, int x) //O(height)
{
    if(root==NULL) root = new Node(x);
    if (x < root->val)
    {
        if (!root->left) root->left = new Node(x);
        else insert(root->left,x);
    }
    else if (!root->right) root->right = new Node(x);
        else insert(root->right,x);
}
Node* convert(int a[], int l, int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node*leftRoot = convert(a,l,mid-1);
    Node*rightRoot = convert(a,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    // Node *root = input_tree();
    // int x;
    // cin >> x;
   
    // if(search(root,x)) cout<<"Found";
    // else cout<<"Not found"<<endl;
    // insert(root, 27); 
    // insert(root, 32); 
    // level_order(root);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    Node *root = convert(a,0,n-1);
    level_order(root);
    return 0;
}