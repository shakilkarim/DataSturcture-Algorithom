#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> nums;
    int value;

    // Take input until -1 is encountered
    while (true)
    {

        cin >> value;
        if (value == -1)
        {
            break;
        }
        nums.push_back(value);
    }
    nums.sort();
    nums.unique();

    for (int val : nums)
    {
        cout << val << " ";
    }

    return 0;
}
