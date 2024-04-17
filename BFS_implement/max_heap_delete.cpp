#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int curr_size = v.size() - 1;
    while (curr_size != 0)
    {
        int parent = (curr_size - 1) / 2;
        if (v[curr_size] > v[parent])
        {
            swap(v[curr_size], v[parent]);
        }
        else
        {
            break;
        }
        curr_size = parent;
    }
}
void delete_heap(vector<int> &v)
{
    int total_size = v.size() - 1;
    v[0] = v[total_size];
    v.pop_back();
    int current_ind = 0;
    while (true)
    {
        int left_index = current_ind * 2 + 1;
        int right_index = current_ind * 2 + 2;

        if (left_index <= total_size && right_index <= total_size)
        {
            // Two value
            if (v[left_index] >= v[right_index] && v[left_index] > v[current_ind])
            {
                swap(v[left_index], v[current_ind]);
                current_ind = left_index;
            }
            else if (v[right_index] >= v[left_index] && v[right_index] > v[current_ind])
            {
                swap(v[right_index], v[current_ind]);
                current_ind = right_index;
            }
            else
            {
                break;
            }
        }
        else if (left_index <= total_size)
        {
            // Left side
            swap(v[left_index], v[current_ind]);
            current_ind = left_index;
            break;
        }
        else if (right_index <= total_size)
        {
            // Right side
            swap(v[right_index], v[current_ind]);
            current_ind = right_index;
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
    delete_heap(v);
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}