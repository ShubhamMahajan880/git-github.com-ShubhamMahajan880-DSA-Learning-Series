#include <bits/stdc++.h>
using namespace std;

// 4) First Non-Repeating Letter -

void firstNonRepeating(string s) // TC - O(n), SC - O(n)
{
    queue<char> Q;
    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        Q.push(ch);
        freq[ch - 'a']++;
        while (!Q.empty() && freq[Q.front() - 'a'] > 1)
        {
            Q.pop();
        }
        if (Q.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << Q.front() << endl;
        }
    }
}
int main()
{
    string s;
    cout << "Enrter the string you want to check foor First Non Repeating Character - " << endl;
    getline(cin, s);

    firstNonRepeating(s);
    /*
    Enrter the string you want to check foor First Non Repeating Character -
    naman
    n
    n
    n
    n
    m

     */
}
