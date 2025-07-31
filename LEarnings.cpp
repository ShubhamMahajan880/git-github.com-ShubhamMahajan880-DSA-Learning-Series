#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<string>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
// #include<list>
// #include<iterator>
using namespace std;

// 9) Valid Paranthesis Problem -

bool isValidParanthesis(string str)
{
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[') // opening condition
        {
            st.push(ch);
        }
        else // closing condiiton
        {
            if (st.empty()) // if nothing available insode stack
            {
                return false;
            }

            // matching paranethiss conditiopn
            char top = st.top();
            if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (st.empty()) // opening closing se match hone ke baad agr stack empty he to true otherwise false
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1, s2;
    cout << "Enter the Paranthesis string for val 1  - " << endl;
    getline(cin, s1);

    cout << "Enter the Paranthesis string for val 2  - " << endl;
    getline(cin, s2);

    cout << isValidParanthesis(s1) << endl;
    cout << isValidParanthesis(s2) << endl;
}