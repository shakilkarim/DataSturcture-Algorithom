#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{

    v.push_back(x);

    int curr_index = v.size() - 1;

    while (curr_index != 0)
    {
        int parent = (curr_index - 1) / 2;
        if (v[parent] < v[curr_index])
        {
            swap(v[parent], v[curr_index]);
        }
        else
        {
            break;
        }
        curr_index = parent;
    }
}
void delete_heap(vector<int> &v)
{
    int last_ind = v.size() - 1;
    v[0] = v[last_ind];
    v.pop_back();
    int curr_ind = 0;
    while (true)
    {

        int left_index = curr_ind * 2 + 1;
        int right_index = curr_ind * 2 + 2;
        if (left_index <= last_ind && right_index <= last_ind)
        {
            // Two side
            if (v[left_index] >= v[right_index] && v[left_index] >= v[curr_ind])
            {
                // swap
                swap(v[left_index], v[curr_ind]);

                curr_ind = left_index;
            }
            else if (v[right_index] >= v[left_index] && v[right_index] >= v[curr_ind])
            {
                swap(v[right_index], v[curr_ind]);
                curr_ind = right_index;
            }
            else
            {
                break;
            }
        }
        else if (left_index <= last_ind)
        {
            // Left side
            swap(v[left_index], v[curr_ind]);
            curr_ind = left_index;
            break;
        }
        else if (right_index <= last_ind)
        {
            // right
            swap(v[left_index], v[curr_ind]);
            curr_ind = left_index;
            break;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}