#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    long long int roll;

    Student(string name, long long int roll)
    {

        this->name = name;
        this->roll = roll;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.name == b.name)
            return a.roll < b.roll;
        else
            return a.name >= b.name;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        long long int roll;

        cin >> name >> roll;
        cin.ignore();
        Student newStudent(name, roll);
        pq.push(newStudent);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }
    return 0;
}