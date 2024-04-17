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
void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->next = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x, value;
        cin >> x >> value;
        if (x == 0)
        {
            insert_head(head, tail, value);
        }
        else if (x == 1)
        {
            insert_tail(head, tail, value);
        }

        cout << head->value << " " << tail->value;
        cout << endl;
    }

    return 0;
}