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
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        // All work
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3rd step
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}
bool isPerfectBinaryTree(Node *root)
{
    int h = height(root);
    int totalNodes = countNodes(root);
    int expectedNodes = pow(2, h) - 1; // 2^h - 1

    return totalNodes == expectedNodes;
}
int main()
{

    Node *root = input_tree();
    cout << (isPerfectBinaryTree(root) ? "YES" : "NO") << endl;
    return 0;
}