#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist(10, 5);
    // list<int> l{10, 20, 30, 40};
    // mylist = l;
    // int a[5] = {10, 30, 40, 40, 70};
    vector<int> v = {100, 200, 300};
    // cout << mylist.front();
    // list <int> mylist(a, a + 5);
    // list<int> mylist(a, a + 5);
    list<int> vec(v.begin(), v.end());
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << endl;
    }
    // for (int value : mylist)
    // {
    //     cout << value << endl;
    // }
    // cout << mylist.size();
    return 0;
}