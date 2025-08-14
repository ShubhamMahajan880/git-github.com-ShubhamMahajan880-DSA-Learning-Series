#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include <map>;
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
using namespace std;

//1) Priority Queue Introduction - 

/*
#include<queue>
What is HEap - Heap is a data structures.
What is Priority Queue - Priority Queue is Implementation of Heap using STL Libraries.
 */

int main()
{
    // Max Heap Prioty Queue - Max Eleemnt on top
    // Max Heap Implementatio using prioroty queue
    priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(9);
    pq.push(7);
    pq.push(3);

    while (!pq.empty())
    {
        cout << "Top is - " << pq.top() << endl;
        pq.pop();
    }

    /*
    Top is - 10
    Top is - 9
    Top is - 7
    Top is - 5
    Top is - 3
_ _ __ _ __ _ __ _ __ _ __ _ __ _ _

     */
    cout << endl;
    cout << "_ _ __ _ __ _ __ _ __ _ __ _ __ _ _ " << endl;

    //  For Min Heap Priority Queue - Min Element  at top
    // Min Heap Implementatio using prioroty queue
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(10);
    pq2.push(9);
    pq2.push(7);
    pq2.push(3);

    while (!pq2.empty())
    {
        cout << "Top is - " << pq2.top() << endl;
        pq2.pop();
    }

    cout << endl;
    cout << "_ _ __ _ __ _ __ _ __ _ __ _ __ _ _ " << endl;
    /*
    Top is - 3
    Top is - 5
    Top is - 7
    Top is - 9
    Top is - 10
    _ _ __ _ __ _ __ _ __ _ __ _ __ _ _
     */

    //  Similarly we can also implemnt it for stirng -
    // Max Heap - Maximum string at top
    priority_queue<string> s;
    s.push("Microsoft Hyderabad");
    s.push("Atlassian Bangaluru");
    s.push("Adobe Pune");
    s.push("Google Hyderabad");
    s.push("Uber Bangalore");

    while (!s.empty())
    {
        cout << "Top is - " << s.top() << endl;
        s.pop();
    }
    cout << endl;
    cout << "_ _ __ _ __ _ __ _ __ _ __ _ __ _ _ " << endl;

    /*
    Top is - Uber Bangalore
    Top is - Microsoft Hyderabad
    Top is - Google Hyderabad
    Top is - Atlassian Bangaluru
    Top is - Adobe Pune
    _ _ __ _ __ _ __ _ __ _ __ _ __ _ _
    */

    // For Increasing order of strings  -
    // Min Heap - Minimum String at top
    priority_queue<string, vector<string>, greater<string>> s2;
    s2.push("Microsoft Hyderabad");
    s2.push("Atlassian Bangaluru");
    s2.push("Adobe Pune");
    s2.push("Google Hyderabad");
    s2.push("Uber Bangalore");

    while (!s2.empty())
    {
        cout << "Top is - " << s2.top() << endl;
        s2.pop();
    }
    cout << endl;
    cout << "_ _ __ _ __ _ __ _ __ _ __ _ __ _ _ " << endl;

    /*
    Top is - Adobe Pune
    Top is - Atlassian Bangaluru
    Top is - Google Hyderabad
    Top is - Microsoft Hyderabad
    Top is - Uber Bangalore
    _ _ __ _ __ _ __ _ __ _ __ _ __ _ _
     */
}
