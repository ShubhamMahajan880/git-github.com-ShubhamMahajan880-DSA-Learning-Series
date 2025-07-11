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
using namespace std;

// Floyd's Cycle FInding Algorithm - Detect a Cycle/Loop in LL

void printList(list<int> ll)
{
    list<int>::iterator itr;
    for (auto val : ll)
    {
        cout << val << "-->";
    }
    cout << "NULL" << endl;
}



int main()
{
    list<int> ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    printList(ll);
}
