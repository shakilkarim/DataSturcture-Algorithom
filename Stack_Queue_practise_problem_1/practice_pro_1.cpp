#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
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
    myStack oneSt;
    myStack twoSt;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        oneSt.push(value);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        twoSt.push(value);
    }

    if (oneSt.size() != twoSt.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    int flag = 0;
    while (!oneSt.empty())
    {
        if (oneSt.top() != twoSt.top())
        {
            flag = 1;
        }
        oneSt.pop();
        twoSt.pop();
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // while (!oneSt.empty())
    // {
    //     cout << oneSt.top() << " ";
    //     oneSt.pop();
    // }
    // cout << endl;
    // while (!twoSt.empty())
    // {
    //     cout << twoSt.top() << " ";
    //     twoSt.pop();
    // }
    return 0;
}