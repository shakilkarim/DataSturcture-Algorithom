#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int v)
    {
        value = v;
        prev = NULL;
        next = NULL;
    }
};
void printLeftToRight(Node *head)
{
    Node *current = head;
    cout << "L"
         << " "
         << "->"
         << " ";
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

void printRightToLeft(Node *tail)
{
    Node *current = tail;
    cout << "R"
         << " "
         << "->"
         << " ";
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->prev;
    }
    cout << endl;
}
void insertAtIndex(Node *&head, Node *&tail, int x, int v)
{
    Node *newNode = new Node(v);

    if (x < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (head == nullptr)
    {
        if (x != 0)
        {
            cout << "Invalid" << endl;
            return;
        }
        head = newNode;
        tail = newNode;
    }
    else if (x == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *current = head;
        for (int i = 0; i < x - 1; i++)
        {
            if (current->next == nullptr)
            {
                cout << "Invalid" << endl;
                return;
            }
            current = current->next;
        }

        if (current->next == nullptr)
        {
            current->next = newNode;
            newNode->prev = current;
            tail = newNode;
        }
        else
        {
            newNode->prev = current;
            newNode->next = current->next;
            current->next->prev = newNode;
            current->next = newNode;
        }
    }

    printLeftToRight(head);
    printRightToLeft(tail);
}

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;

    DoublyLinkedList dll;

    for (int i = 0; i < Q; i++)
    {
        int x, v;
        cin >> x >> v;
        insertAtIndex(head, tail, x, v);
    }

    return 0;
}
