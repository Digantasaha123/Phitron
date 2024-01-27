#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;
/*
Stack of float, double, char,
string, array, structure, object of class
*/
int globalId = 100;

class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = -1.0;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }

    person(string name, float salary)
    {
        setSalary(salary);
        setName(name);
        id = globalId;
        globalId++;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return this->name;
    }
    float getSalary()
    {
        return this->salary;
    }
    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};
int main()
{
    //     Stack <pair<int , char>> st;
    //     st.push(make_pair(1, 'a'));
    //     st.push(make_pair(2, 'b'));
    //     st.push(make_pair(3, 'c'));

    //     while (!st.empty())
    //     {
    //         pair <int, char > chk;
    //         chk = st.pop();
    //         cout << chk.first <<" | "<<chk.second<< endl;
    //     }
    //     cout <<"Size of the stack : "<< st.size() << endl;
    //     if (!st.empty()){
    //          pair <int, char > chk;
    //         chk = st.Top ();
    //         cout << chk.first <<" | "<<chk.second<< endl;
    //     }
    // //         cout << st.Top();
    // //   cout << st.size() << endl;
    // //   if (!st.empty()) cout << st.Top() << endl;

    Stack<person> st;
    person a("Diganta", 200.5);
    person b("Mostakem", 600.5);
    person c("Nafian", 700.5);
    st.push(a);
    st.push(b);
    st.push(c);
 
    while(!st.empty()){
        person printobj;
        printobj = st.pop();
        printobj.print();
    }
     st.Top();
    return 0;
}
