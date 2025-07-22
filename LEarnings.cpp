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

int main()
{
    vector<int> vec1(4, 1);
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;

    vec1.push_back(5);
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;

    vec1.pop_back();
    for (auto o : vec1)
    {
        cout << o << " ";
    }
    cout << endl;
    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;
}