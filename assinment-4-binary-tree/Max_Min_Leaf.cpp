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

pair<int, int> findMinMaxLeaf(Node *root)
{
    if (!root)
    {
        return make_pair(INT_MIN, INT_MAX);
    }

    queue<Node *> q;
    q.push(root);
    int maxLeaf = INT_MIN;
    int minLeaf = INT_MAX;

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        if (current->left == NULL && current->right == NULL)
        {
            // Update maxLeaf and minLeaf if the current node is a leaf
            maxLeaf = max(maxLeaf, current->val);
            minLeaf = min(minLeaf, current->val);
        }

        if (current->left)
        {
            q.push(current->left);
        }
        if (current->right)
        {
            q.push(current->right);
        }
    }

    return make_pair(maxLeaf, minLeaf);
}

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
int main()
{

    Node *root = input_tree();
    pair<int, int> result = findMinMaxLeaf(root);

    // Output the result
    cout << result.first << " " << result.second << endl;

    return 0;
}
