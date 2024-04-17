#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(int n, int a[])
{
    set<int, greater<int>> s;
    for (int i = 0; i < n; ++i)
    {
        s.insert(a[i]);
    }

    for (int num : s)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        remove_duplicate(n, a);
    }
    return 0;
}