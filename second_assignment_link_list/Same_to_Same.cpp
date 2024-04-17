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
void insert_tailOne(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
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

int main()
{
    Node *headOne = NULL;
    Node *tailOne = NULL;

    Node *headTwo = NULL;
    Node *tailTwo = NULL;

    int valueOne, valueTwo;
    while (true)
    {
        cin >> valueOne;

        if (valueOne == -1)
        {
            break;
        }
        else
        {
            insert_tailOne(headOne, tailOne, valueOne);
        }
    }
    while (true)
    {
        cin >> valueTwo;

        if (valueTwo == -1)
        {
            break;
        }
        else
        {
            insert_tailOne(headTwo, tailTwo, valueTwo);
        }
    }
    int ListOne_size = size(headOne);
    int ListTwo_size = size(headTwo);
    int flag = 1;

    if (ListOne_size != ListTwo_size)
    {
        cout << "NO";
    }
    else
    {
        while (headOne != NULL && headTwo != NULL)
        {
            if (headOne->value != headTwo->value)
            {
                flag = 0;
                break;
            }
            headOne = headOne->next;
            headTwo = headTwo->next;
        }
        if (flag == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

    return 0;
}