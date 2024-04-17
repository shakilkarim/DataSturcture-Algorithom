#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
void printNodesAtLevel(Node *root, int X)
{
    int level = 0;
    if (root == NULL)
    {
        cout << "Invalid";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int nodeCount = q.size();

        for (int i = 0; i < nodeCount; i++)
        {
            Node *node = q.front();
            q.pop();

            if (level == X)
            {
                cout << node->val << " ";
            }

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }

        // if (level == X)
        // {

        //     break;
        // }
        level++;
    }
    if (X > level)
    {
        cout << "Invalid";
    }
}

int main()
{

    Node *root = input_tree();

    int X;
    cin >> X;

    printNodesAtLevel(root, X);

    return 0;
}
