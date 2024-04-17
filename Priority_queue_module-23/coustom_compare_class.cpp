#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string name;
    int marks;
    int roll;
    Students(string na, int ma, int roll)
    {
        this->name = na;
        this->marks = ma;
        this->roll = roll;
    }
};
class dem
{
public:
    bool operator()(Students a, Students b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks < b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Students, vector<Students>, dem> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int mark, roll;
        cin >> name >> roll >> mark;

        Students obj(name, roll, mark);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
        cout << endl;
        pq.pop();
    }
    return 0;
}