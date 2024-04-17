#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; ++i)
    {
        minHeap.push(a[i]);
    }

    while (q--)
    {
        int com;
        cin >> com;

        if (com == 0)
        {
            int X;
            cin >> X;

            minHeap.push(X);
            cout << minHeap.top() << endl;
        }
        else if (com == 1)
        {
            if (!minHeap.empty())
            {
                cout << minHeap.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 2)
        {
            if (!minHeap.empty())
            {
                minHeap.pop();
                if (!minHeap.empty())
                {
                    cout << minHeap.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}