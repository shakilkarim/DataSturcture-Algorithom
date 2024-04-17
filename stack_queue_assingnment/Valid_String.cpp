#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        stack<char> st;
        string s;
        cin >> s;

        for (char ch : s)
        {

            if (!st.empty() && ((ch == 'B' && st.top() == 'A') || (st.top() == 'B' && ch == 'A')))
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}