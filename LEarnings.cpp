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

int stringAnagram(string s1, string s2)
{
    cout << "According to you String 1 is - " << endl;
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "and String 2 is - " << endl;
    for (auto j : s2)
    {
        cout << j << " ";
    }
    cout << endl;

    sort(s1.begin(), s1.end());
    cout << "Sorted String 1 is - " << endl;
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(s2.begin(), s2.end());
    cout << "Another String after sorting is - " << endl;
    for (auto j : s2)
    {
        cout << j << " ";
    }
    cout << endl;

    if (s1 == s2)
    {
        cout << "Clearly, both the strings are Anagram of each other - " << endl;
        return 0;
    }
    cout << "String Are not Anagrams" << endl;
}

int main()
{
    string s1, s2;
    cout << "Enter S1 " << endl;
    getline(cin, s1);

    cout << "Give me S2" << endl;
    getline(cin, s2);
    stringAnagram(s1, s2);
}