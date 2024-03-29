#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int precisionCalcultation(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPrefix(string chk)
{
    reverse(chk.begin(), chk.end());
    Stack<int> st;
    string result;
    for (int i = 0; i < chk.length(); i++)

    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            result += chk[i];
        }
        else if (chk[i] == ')')
        {
            st.push(chk[i]);
        }
        else if (chk[i] == '(')
        {
            while (!st.empty() && st.Top() != ')')
            {
                result += st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && precisionCalcultation(st.Top()) >= precisionCalcultation(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    while (!st.empty())
    {
        result += st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int prefixEvaluation(string chk)
{
    Stack<int> st;
    for (int i = chk.length() - 1; i >= 0; i--)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i] - '0');
        }

        else
        {
            int a = st.pop();
            int b = st.pop();
            switch (chk[i])
            {

            case '+':
                st.push(a + b);
                break;

            case '-':
                st.push(a - b);
                break;

            case '*':
                st.push(a * b);
                break;

            case '/':
                st.push(a / b);
                break;

            case '^':
                st.push(pow(a, b));
                break;

            default:
                break;
            }
        }
    }
    return st.Top();
}
/* +*423
-+7*45+20
*/
int main()
{
    // cout << endl
    //      << prefixEvaluation("+*423") << endl;

    // cout << endl
   //      << prefixEvaluation("-+7*45+20") << endl;
    string infix = "A+B";
    string prefix = infixToPrefix(infix);


    
    cout << endl
         << ""<<prefix << endl
         << prefixEvaluation(prefix) << endl
         << endl;
    return 0;
}