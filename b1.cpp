#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool xauNgoac(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (xauNgoac(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}