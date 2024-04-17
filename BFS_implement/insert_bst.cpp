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
Node *input_level_order()
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

        // Left Right input
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        // children line ayi dite hobe
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *r = q.front();
        q.pop();

        cout << r->val << " ";
        if (r->left)
            q.push(r->left);
        if (r->right)
            q.push(r->right);
    }
}
void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
    }
    if (root->val > x)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
int main()
{

    Node *root = input_level_order();
    int x;
    cin >> x;

    insert(root, x);
    level_order(root);
    return 0;
}