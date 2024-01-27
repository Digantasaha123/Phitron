#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll, marks;
    Student(string n, int r, int m)
    {
        name = n;
        roll = r;
        marks = m;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        else
            return a.marks < b.marks;
    }
};
int main()
{
    int t;
    cin >> t;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (t--)
    {
        string name;
        int roll, marks;
        cin.ignore();
        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }
    // while(!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }
    
    int q;
    cin >> q;
    while (q--)
    {
        int choice;
        cin >> choice;
        if (choice == 0)
        {
            string name;
            int roll, marks;
            cin.ignore();
            cin >> name >> roll >> marks;
            Student st(name, roll, marks);
            pq.push(st);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        if (choice == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        if (choice == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}