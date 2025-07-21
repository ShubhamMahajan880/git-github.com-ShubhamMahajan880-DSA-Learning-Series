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
    set<int> st;
    st.insert(10);
    st.insert(12);
    st.insert(14);
    st.insert(16);
    st.insert(16);
    st.insert(14);

    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << st.size();
    cout << endl;
    st.erase(12);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "- - - - -- - - ";
    cout << endl;
    int arr[10] = {1, 5, 6, 8, 1, 9, 10, 12, 47, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    set<int> st1;
    for (int i = 0; i < 10; i++)
    {
        st1.insert(arr[i]);
    }

    for (auto i : st1)
    {
        cout << i << " ";
    }
    cout << endl;

    multiset<int> st2;
    for (int i = 0; i < 10; i++)
    {
        st2.insert(arr[i]);
    }
    cout << endl;
    for (auto i : st2)
    {
        cout << i << " ";
    }
cout << endl;           
}