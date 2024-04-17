#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist{10, 20, 30, 20};

    // mylist.push_back(99);
    // mylist.push_front(33);
    // mylist.pop_back();
    // mylist.pop_front();
    // list<int> newlist{33, 44, 55};
    // mylist.insert(next(mylist.begin(), 2), newlist.begin(), newlist.end());
    // mylist.erase(next(mylist.begin(), 1));
    // replace(mylist.begin(), mylist.end(), 20, 100);

    auto it = find(mylist.begin(), mylist.end(), 20);

    if (it == mylist.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    // for (int val : mylist)
    // {
    //     cout << val << endl;
    // }
    return 0;
}