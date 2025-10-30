#include <bits/stdc++.h>
using namespace std;

void permutations(string str, string ans)
{
    int n = str.size();

    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];                                                 // selectingn 1st char from string
        string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1); // performing for next char after 1st char
        permutations(nextStr, ans + ch);                                  // ith char choice to add in permutation
    }
}
int main()
{
    string str;
    string ans = "";
    cout << "mention the string wanna permuted.." << endl;
    getline(cin, str);
    cout << "So, all the permutations of given string are  - " << endl;
    permutations(str, ans);
}