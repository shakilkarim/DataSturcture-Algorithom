#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin >> q;
    queue<string> newQ;
    for (int i = 0; i < q; i++)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            string name;
            cin >> name;
            newQ.push(name);
        }
        else if (com == 1)
        {
            if (!newQ.empty())
            {
                cout << newQ.front() << endl;
                newQ.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}