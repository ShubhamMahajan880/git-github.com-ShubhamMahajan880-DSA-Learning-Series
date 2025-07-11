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
// 6) LL using STL in CPP -

void printList(list<int> ll)
{
    // 2) Iterator STL Functionality -
    list<int>::iterator itr; // Iterator STL functionality for printing elements through interating over them
    /*
    📒In interator its mandatory to infor for which we are creating this. Here we arre creatiung this for LL iterator.
    - Iterator is basically a Ppointer which is iteratig for each & every value wehre we are iterating it.
    - For printing values through Iterator need to use * also as its a pointer
    It- erator SYntax ➖ after declaring it in header File
    TYPEOFSTLITEM<datatype>::iterator NAMEOFITERATOR
    Here : TYPEOFSTLITEM - can be anythign for which we are using STL inbuilt functionalities either LL,Vecotr, BinarySeach, Stack,Queue
           <Datatype> - which we've taken for the data - here in LL we tokk for int LL, for vector or anything it could be int,char etc
           :: - indicates Declaration in CPP
           Iterator - name includes using Iterator inside STL, for the code
           NAMEOFITERATOR - could be anything
     */

    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl; // 1->2->3->4->5->NULL

    /*
    OR We Could Use RANGEBASEDFORLOOP for better understanding & Easy Synatx -
    for (auto val : ll)
    {
        cout << val << "-->";
    }
    cout << "NULL" << endl;
}
     */
    // -------------------
}
int main()
{
    // 1) list STL functionality for creating LL -
    list<int> ll; // list is a STL function which incldues LL in itself. Here a LL names as ll has been created successfully.

    // Push_front & Push_back STL Functiobality for Pusing elements inside LL -
    ll.push_front(4); // push_first inside list - allows push operaation in LL using STL where we can push elements by simply using this name
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    // -------------------

    // Calling LL to print
    printList(ll);

    // 3) Size STL Functionality
    cout << ll.size() << endl; // 5 - Size STL functionality for printing the size of LL
    // -------------------

    // 4) Front & Back STL Functionality -
    cout << "Head of the LL is - " << ll.front() << endl; // Head of the LL is - 1
    cout << "Tail for the LL is - " << ll.back() << endl; // Tail for the LL is - 5
    // -------------------

    // 5) Pop_front * Pop_Back STL Functionality -
    ll.pop_front();
    printList(ll); // 2->3->4->5->NULL - Pop First Element(Head) deleted from LL

    ll.pop_back();
    printList(ll); // 2->3->4->NULL - Pop Last Element(Tail) deleted from LL
    // -------------------

    // 6) Insert STL Functionality -
    auto k = ll.begin();
    advance(k, ll.size()); // inserting elemnt at last position.
    ll.insert(k, 99);      // 1-->2-->3-->4-->5-->99-->NULL
    printList(ll);

    k = ll.begin();
    advance(k, 2);     // inserting at any particular index
    ll.insert(k, 150); // 1-->2-->150-->3-->4-->5-->99-->NULL
    printList(ll);

    k = ll.begin();
    advance(k, 0);     // inserting at the first index
    ll.insert(k, 350); // 350-->1-->2-->150-->3-->4-->5-->99-->NULL
    printList(ll);
    // -------------------
}
// ____________ ____________ ____________ ____________ ____________
