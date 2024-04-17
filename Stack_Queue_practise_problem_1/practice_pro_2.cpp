#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    queue<int> q;

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
    }
    int flag = 0;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            flag = 1;
        }
        st.pop();
        q.pop();
    }

    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}