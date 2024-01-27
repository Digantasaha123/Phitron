#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    int id;
    string name;
    char section;
    int mark;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        student st[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> st[i].id >> st[i].name >> st[i].section >> st[i].mark;
        }
        student target = st[0];
        for (int i = 0; i < 3; i++)
        {
            if (st[i].mark == target.mark)
            {
                if (st[i].id < target.id)
                {
                    target = st[i];
                }
            }
            else if (st[i].mark > target.mark)
            {
                target = st[i];
            }
        }
        cout << target.id << " " << target.name << " " << target.section << " " << target.mark<<endl;
    }
    return 0;
}