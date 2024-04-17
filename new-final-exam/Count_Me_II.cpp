#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> freq;
        int maxFreq = 0;
        int maxValue = 0;
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            freq[num]++;
            if (freq[num] > maxFreq || (freq[num] == maxFreq && num > maxValue))
            {
                maxFreq = freq[num];
                maxValue = num;
            }
        }

        cout << maxValue << " " << maxFreq << endl;
    }
    return 0;
}
