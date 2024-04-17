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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    // Doubly list connection

    head->next = a;
    a->pre = head;

    a->next = b;
    b->pre = a;
    normal_print(head);
    cout << endl;
    reverse_print(tail);
    return 0;
}