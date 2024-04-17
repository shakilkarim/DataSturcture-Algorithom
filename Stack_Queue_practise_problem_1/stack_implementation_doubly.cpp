#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *pre;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};
class myStack
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
            return;
        }
        tail->next = newNode;
        tail->next->pre = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->pre;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack st;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}