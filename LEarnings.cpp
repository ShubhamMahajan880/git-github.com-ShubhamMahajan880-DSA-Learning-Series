#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;
    mp[45] = "Microsoft";
    mp[60] = "Google";
    mp[85] = "Atlassian";

    cout << mp.size() << endl;

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;

    cout << mp[60] << endl;
    cout << mp[85] << endl;

    mp.erase(45);
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;

    // first value only
    for (auto i : mp)
    {
        cout << i.first << " ";
    }
    cout << endl;

    // second element
    for (auto i : mp)
    {
        cout << i.second << " ";
    }
    cout << endl;

    // inserting
    mp.insert(make_pair(35, "WellsFargo"));
    cout << mp[35] << endl;
    mp.insert(make_pair(24, "American Express"));
    for (auto i : mp)
    {
        cout << i.first << " " << i.second;
    }
    cout << endl;

    // for (int i = 0; i < mp.size(); i++)
    // {
    //     cout << mp[i] << " ";
    // }
    // cout << endl;
}
