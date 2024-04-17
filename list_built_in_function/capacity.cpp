#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist{10, 20, 30};
    // cout << mylist.max_size();
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(5);
    for (int value : mylist)
    {
        cout << value << endl;
    }
    return 0;
}