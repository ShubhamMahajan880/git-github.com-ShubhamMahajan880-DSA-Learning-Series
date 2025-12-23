#include <bits/stdc++.h>
using namespace std;

// 10) Duplicate  Paranthesis Problem -

bool isDuplicate(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')') // Non-CLosing

        {
            st.push(ch);
        }
        else // closing
        {
            if (st.top() == '(')
            {
                return true; // Duplicate - nothing b/w opening & closing
            }
            while (st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}

int main()
{
    string s1, s2;
    cout << "mention the expressions want to check for S1 - " << endl;
    getline(cin, s1);

    cout << "mention the expressions want to check for S2 - " << endl;
    getline(cin, s2);

    cout << isDuplicate(s1) << endl;
    cout << isDuplicate(s2) << endl;
    /*
    mention the expressions want to check for S1 -
    ((a+b))
    mention the expressions want to check for S2 -
    ((a+b)+(c+d))
    1
    0
TC & SC - O(N)
     */
}
