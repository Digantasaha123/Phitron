#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{

    if((a.math_marks + a.eng_marks)==(b.math_marks + b.eng_marks))
    {
        return a.id<b.id;
    }
    else return (a.math_marks + a.eng_marks)>(b.math_marks + b.eng_marks);
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].eng_marks >> a[i].math_marks;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].eng_marks << " " << a[i].math_marks << endl;
    }
    return 0;
}
