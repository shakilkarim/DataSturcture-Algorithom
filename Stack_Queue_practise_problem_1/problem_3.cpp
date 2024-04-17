#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }

    while (!newSt.empty())
    {
        cout << newSt.top() << " ";
        newSt.pop();
    }
    return 0;
}