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
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
// #include <map>;
// #include <set>;
// #include<unordered_map>
// #include<unordered_set>
using namespace std;

/*
2) STL COntainersMap - Unordered Maps & Maps

- Unordred Map uses - the Hash Table Data Structure
- Maps - Uses Red Black Tree(Self Balancing BST's) Data Structure.
- The same implies fror Unordered Set & Set. Unordered Set uses Hash Table and Set uses Red Black Tree Data Structure
- UNORDERED SET ia also an UNRDERED MAP, but it doen't store the vaalues of map, it stores only the key.
- SET is also a Map, and it also doen't store the vaalues of map, it stores only the key.
- In the cases where we need to maintain the TC but no need to maintaib the order then use UNORDERED MAP.
- and similarly, at where we want to manage the ORDER but don't care about TC then use MAP.
- In UNORDER(anything) TC - O(1) and in worst its O(N)
- while in ordered(anything) TC - O(log n). Always

*/

// int main()
// {
//     // Unordered Map Working -

//     unordered_map<string, int> m;

//     m["Microsoft"] = 43;
//     m["Google"] = 60;
//     m["Atlassian"] = 80;
//     m["Adobe"] = 40;
//     m["Amazon"] = 38;

//     cout << m["Microsoft"] << endl; // 43
//     cout << " - - - - " << endl;

//     for (pair<string, int> country : m)
//     {
//         cout << country.first << "," << country.second << endl;
//     }
//     /*

//     Amazon,38
//     Microsoft,43
//     Google,60
//     Atlassian,80
//     Adobe,40
//      */
//     cout << " - - - - " << endl;

//     //  COunt FUnction -
//     if (m.count("Amazon"))
//     {
//         cout << "Yes Amazon Exist" << endl;
//     }
//     else
//     {
//         cout << "Amazon doesn't exist" << endl;
//     }
//     // Yes Amazon Exist
//     cout << " - - - - " << endl;

//     if (m.count("Uber"))
//     {
//         cout << "Yes Uber Exist" << endl;
//     }
//     else
//     {
//         cout << "Uber doesn't exist" << endl;
//     }
//     // Uber doesn't exist
//     cout << " - - - - " << endl;

//     m.erase("Amazon");
//     if (m.count("Amazon"))
//     {
//         cout << "Yes Amazon Exist" << endl;
//     }
//     else
//     {
//         cout << "Amazon doesn't exist" << endl;
//     }
//     // Amazon doesn't exist
//     cout << " - - - - " << endl;

//     // If we want to upgrrade the KEY, then simply override the value -
//     m["Microsoft"] = 43;
//     m["Google"] = 60;
//     m["Atlassian"] = 80;
//     m["Adobe"] = 40;
//     m["Adobe"] = 90;

//     for (pair<string, int> country : m)
//     {
//         cout << country.first << "," << country.second << endl;
//     }
//     cout << " - - - - " << endl;

//     /*
//      - - - -
//     Microsoft,43
//     Google,60
//     Atlassian,80
//     Adobe,90
//      */
// }
// ____________ ____________

// Map Working -

// int main()
// {
//     map<string, int> m;

//     m["Microsoft"] = 43;
//     m["Google"] = 60;
//     m["Atlassian"] = 80;
//     m["EY"] = 100;
//     m["Adobe"] = 40;
//     m["Adobe"] = 90;
//     m["EU"] = 50;

//     for (pair<string, int> country : m)
//     {
//         cout << country.first << "," << country.second << endl;
//     }
//     cout << " - - - - " << endl;

//     /*
//     Adobe,90
//     Atlassian,80
//     EU,50
//     EY,100 - using map proepr jumling in alphabatical order
//     Google,60
//     Microsoft,43
//      */

//     if (m.count("Intuit"))
//     {
//         cout << "Intuit Company Exists" << endl;
//     }
//     else
//     {
//         cout << "Intuit Company  doesn;t Exists" << endl;
//     }
//     // Intuit Company  doesn;t Exists
//     cout << " - - - - " << endl;
// }
// ____________ ____________

// Unorderd Set Working -
// int main()
// {
//     unordered_set<int> s;
//     s.insert(60);
//     s.insert(40);
//     s.insert(80);
//     s.insert(80);
//     s.insert(45);
//     s.insert(45);
//     s.insert(45);

//     cout << s.size() << endl; // 4 - it stored the unique values only

//     if (s.find(60) != s.end()) // s.end ke equal nhi h ...mtlb end nhi hua h exist krti h.. otherwise
//     {
//         cout << "60 Exist" << endl;
//     }
//     else
//     {
//         cout << "60 doesn't exists" << endl; // s.end ke equl he end ho gya he.. diesn't exist
//     }
//     // 60 Exist

//     if (s.find(100) != s.end())
//     {
//         cout << "100 exist" << endl;
//     }
//     else
//     {
//         cout << "100 doesn;t exist" << endl; // end ke brabr aa gya .. exist nhi krta
//     }
//     // 100 doesn;t exist

//     s.erase(45);
//     if (s.find(45) != s.end())
//     {
//         cout << "45 exist" << endl;
//     }
//     else
//     {
//         cout << "45 doesn't exist" << endl;
//     }
//     // 45 doesn't exist - as removed using erase command

//     for (auto i : s)
//     {
//         cout << i << endl;
//     }
//     /*
//     80
//     40
//     60 - got elements in anyway or any of the random order.
//      */
// }
// ____________ ____________

// Set Working -

// int main()
// {
//     set<int> s;
//     s.insert(60);
//     s.insert(40);
//     s.insert(80);
//     s.insert(80);
//     s.insert(45);
//     s.insert(45);
//     s.insert(45);

//     cout << s.size() << endl; // 4

//     s.erase(45);
//     if (s.find(45) != s.end())
//     {
//         cout << "45 exist" << endl;
//     }
//     else
//     {
//         cout << "45 doesn't exist" << endl;
//     }
//     // 45 doesn't exist

//     for (auto i : s)
//     {
//         cout << i<<" "; // 40 60 80 
//     }
// }