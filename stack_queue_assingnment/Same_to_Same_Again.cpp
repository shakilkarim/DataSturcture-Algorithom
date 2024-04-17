#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)

    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myStack
{
public:
    Node *head = NULL;
    int sz = 0;

    int getSize()
    {
        // Write your code here
        return sz;
    }

    bool empty()
    {
        // Write your code here
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int value)
    {
        // Write your code here
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;

            return;
        }
        newNode->next = head;

        head = newNode;
    }

    void pop()
    {
        // Write your code here

        if (head == NULL)
        {

            return;
        }
        sz--;
        Node *deleteNode = head;
        head = head->next;

        delete deleteNode;
    }

    int top()
    {
        // Write your code here
        if (head == NULL)
        {
            return -1;
        }
        return head->value;
    }
};
int main()
{
    myQueue q;
    myStack st;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    // if (st.getSize() != q.size())
    // {
    //     cout << "NO" << endl;
    // }
    int flag = 0;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            flag = 1;
        }
        st.pop();
        q.pop();
    }

    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}