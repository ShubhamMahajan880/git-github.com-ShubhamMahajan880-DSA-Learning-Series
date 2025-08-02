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
// #include<stack>
// #include <queue>
// #include <deque>
using namespace std;
int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans(arr.size(), 0);
    stack<int> s;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (s.size() > 0 && arr[s.top()] <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {

            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    cout << "Next greateer element is - " << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}