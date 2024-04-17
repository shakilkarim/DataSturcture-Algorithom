#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}