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
void normal_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
void reverse_print(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->pre;
    }
}

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void delete_doubly(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;

    delete deleteNode;
}
void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->pre;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->pre = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node *tail = c;
    // Doubly list connection

    head->next = a;
    a->pre = head;

    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;
    int size_print = size(head);

    int pos;
    cin >> pos;

    delete_doubly(head, pos);
    delete_tail(tail);
    delete_head(head);
    normal_print(head);
    cout << endl;
    reverse_print(tail);
    return 0;
}