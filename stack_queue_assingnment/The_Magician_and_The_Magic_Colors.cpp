#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    stack<char> st;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        string colors;
        cin >> colors;

        for (int i = 0; i < n; i++)
        {

            if (st.empty())
            {
                st.push(colors[i]);
            }
            else
            {
                if (colors[i] == st.top())
                {
                    st.pop();
                }
                else if (colors[i] == 'R' && st.top() == 'B' || colors[i] == 'B' && st.top() == 'R')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else if (colors[i] == 'R' && st.top() == 'G' || colors[i] == 'G' && st.top() == 'R')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
                else if (colors[i] == 'B' && st.top() == 'G' || colors[i] == 'G' && st.top() == 'B')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
                else
                {
                    st.push(colors[i]);
                }
            }
        }
        string result;
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }
        cout << result << endl;
    }

    return 0;
}