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

// 2) Complete Binary Tree -
// 2.1) Heap Data Structure -
/*
CBT - Complete Binary Tree - Tree in which nodes filled levelvise from left to righ.
Heap can be implementted where  - its a CBT and
                                  in max heap full heap follows the property that Parents is greater then both child nodes
                                  and similarly for Min heap - parent is lesser than rest 2 childs.
                                 For full Tree all parent must follow these properties.
- In heap Push & Pop operaitons are perfoermed in O(log n ) times, but wehen we use the clas to create a heap it becomes n times in to chck for entire tree which leads to O(n) time,
So thats why we don't use class or Node  to create the heap. TO maintain the TC. because using class it'll not be Optimized
- When Indexing Start from 1(in some booms) in heap then Parent child relationship also modified the formual by the difference of one
*/

// Implementation of Max Heap -

// class Heap
// {
//     vector<int> vec; // max Heap - CBT
// public:
//     void push(int val) // O(log n)
//     {
//         vec.push_back(val); // step - 1 Push the val

//         // fix heap
//         int childIdx = vec.size() - 1; // childIndex
//         int parIdx = (childIdx - 1) / 2;

//         while (parIdx >= 0 && vec[childIdx] > vec[parIdx]) // O(logn)
//         {
//             swap(vec[childIdx], vec[parIdx]);
//             childIdx = parIdx;
//             parIdx = (childIdx - 1) / 2;
//         }
//     }

//     void heapify(int i) // i = parindex
//     {
//         if (i >= vec.size())
//         {
//             return;
//         }

//         int l = 2 * i + 1;
//         int r = 2 * i + 2;
//         int maxIdx = i;
//         if (l < vec.size() && vec[l] > vec[maxIdx])
//         {
//             maxIdx = l;
//         }
//         if (r < vec.size() && vec[r] > vec[maxIdx])
//         {
//             maxIdx = r;
//         }

//         swap(vec[i], vec[maxIdx]);
//         if (maxIdx != i)
//         {
//             heapify(maxIdx);
//         }
//     }
//     /*
//     In the pop procedure of Heap. Hm kya krte h ki top ke element ko last me laate he qki hm
//     vector use kr rhe h to last se hi pop hoga.bt ese me cbt to bigd gya to isko manage krne ke liye
//     Heapify function use krte he, taaki CBT and compllexity dono optimize rhe.
//     */
//     void pop()
//     {
//         // Step - 1
//         swap(vec[0], vec[vec.size() - 1]);

//         // Step - 2
//         vec.pop_back();

//         // step - 3
//         heapify(0);
//     }

//     int top()
//     {
//         return vec[0]; // top of tree(Highest Priority Element) is here the 0-index of vector
//     }

//     bool empty()
//     {
//         return vec.size() == 0;
//     }
// };
// int main()
// {
//     Heap heap; // Heap Created
//     heap.push(50);
//     heap.push(10);
//     heap.push(100);

//     while (!heap.empty())
//     {
//         cout << "top iss - " << heap.top() << endl;
//         heap.pop();
//     }

//     /*
// top iss - 100
// top iss - 50
// top iss - 10
//    */

//     cout << endl;

//     heap.push(9);
//     heap.push(4);
//     heap.push(8);
//     heap.push(1);
//     heap.push(2);
//     heap.push(5);
//     while (!heap.empty())
//     {
//         cout << "top iss - " << heap.top() << endl;
//         heap.pop();
//     }

//     cout << endl;

//     /*
//     top iss - 9
//     top iss - 8
//     top iss - 5
//     top iss - 4
//     top iss - 2
//     top iss - 1
//      */
// }

// ____________ ____________

// Implementation of Min Heap -

// class Heap
// {
//     vector<int> vec; // max Heap - CBT
// public:
//     void push(int val) // O(log n)
//     {
//         vec.push_back(val); // step - 1 Push the val

//         // fix heap
//         int childIdx = vec.size() - 1; // childIndex
//         int parIdx = (childIdx - 1) / 2;

//         while (parIdx >= 0 && vec[childIdx] < vec[parIdx]) // O(logn)
//         {
//             swap(vec[childIdx], vec[parIdx]);
//             childIdx = parIdx;
//             parIdx = (childIdx - 1) / 2;
//         }
//     }

//     void heapify(int i) // i = parindex
//     {
//         if (i >= vec.size())
//         {
//             return;
//         }

//         int l = 2 * i + 1;
//         int r = 2 * i + 2;
//         int maxIdx = i;
//         if (l < vec.size() && vec[l] < vec[maxIdx])
//         {
//             maxIdx = l;
//         }
//         if (r < vec.size() && vec[r] < vec[maxIdx])
//         {
//             maxIdx = r;
//         }

//         swap(vec[i], vec[maxIdx]);
//         if (maxIdx != i)
//         {
//             heapify(maxIdx);
//         }
//     }

//     void pop()
//     {
//         // Step - 1
//         swap(vec[0], vec[vec.size() - 1]);

//         // Step - 2
//         vec.pop_back();

//         // step - 3
//         heapify(0);
//     }

//     int top()
//     {
//         return vec[0]; // top of tree(Highest Priority Element) is here the 0-index of vector
//     }

//     bool empty()
//     {
//         return vec.size() == 0;
//     }
// };
// int main()
// {
//     Heap heap2; // Heap Created
//     heap2.push(50);
//     heap2.push(10);
//     heap2.push(100);

//     while (!heap2.empty())
//     {
//         cout << "top iss - " << heap2.top() << endl;
//         heap2.pop();
//     }

//     cout << endl;

//     /*
// top iss - 10
// top iss - 50
// top iss - 100
//      */

//     heap2.push(9);
//     heap2.push(4);
//     heap2.push(8);
//     heap2.push(1);
//     heap2.push(2);
//     heap2.push(5);
//     while (!heap2.empty())
//     {
//         cout << "top iss - " << heap2.top() << endl;
//         heap2.pop();
//     }

//     cout << endl;
//     /*
//     top iss - 1
//     top iss - 2
//     top iss - 4
//     top iss - 5
//     top iss - 8
//     top iss - 9
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 3) Priority Queue For Pair/Objects -
// 3.1) Priority_Queue for Objects -
/*
Using Priority Queue - hm student clas ke object ko access krna chaah rhe h for using heap too
- In < Operator Overloading dono jgn < operatoe h to Max heap hi buil hoga on the basis of marks
- agr andr and bahar dono jgh(In the Operator Overloading defining and inside using) < he to by default heap use hoga and cpp me BY DEFAULT MAX HEAP hota he
- jabki java language me DEFAULT HEAP - MIN hota h.
- Key point to Note - Agr Max Heap chahiye to ander bahar dono jgh <
                     & agr Min Heap chahiye to bahar < and ander >

*/

// class Student
// {
// public:
//     string name;
//     int marks;

//     Student(string name, int marks)
//     {
//         this->name = name;
//         this->marks = marks;
//     }

//     bool operator<(const Student &obj) const //  "<"
//     {
//         return this->name < obj.name; // dono jgn < operatoe h to Max heap hi buil hoga on the basis of marks
//     }
// };

// int main()
// {
//     priority_queue<Student> pq;

//     pq.push(Student("Bhumika", 42));
//     pq.push(Student("Aman", 70));
//     pq.push(Student("Chetan", 33));

//     while (!pq.empty())
//     {
//         cout << "Top = " << pq.top().name << "," << pq.top().marks << endl;
//         pq.pop();
//     }

//     /*
//     return this->marks < obj.marks; // when sorting on the behgalf of package - max heap First with max value
//     Top = Aman,70
//     Top = Bhumika,42
//     Top = Chetan,33
// */

//     /*
//     return this->name < obj.name; // Sorting on the behalf of Marks
//     Top = Chetan,33
//     Top = Bhumika,42
//     Top = Aman,70
//     */

//     cout << endl;
// }
// -------------------

// Want to do for building the Min Heap -

// class Student
// {
// public:
//     string name;
//     int rank;

//     Student(string name, int rank)
//     {
//         this->name = name;
//         this->rank = rank;
//     }

//     bool operator<(const Student &obj) const //  "<"
//     {
//         return this->name < obj.name; // dono jgn < operatoe h to Max heap hi buil hoga on the basis of rank
//     }
// };

// int main()
// {
//     priority_queue<Student> pq;

//     pq.push(Student("Aman", 500));
//     pq.push(Student("Bhumika", 1000));
//     pq.push(Student("Chetan", 2000));

//     while (!pq.empty())
//     {
//         cout << "Top = " << pq.top().name << "," << pq.top().rank << endl;
//         pq.pop();
//     }

//     /*
//      return this->name < obj.name; // When by default the Max Heap
//     Top = Chetan,2000
//     Top = Bhumika,1000
//     Top = Aman,500

//     Now for using Min heap -
//     Top = Aman,500
//     Top = Bhumika,1000
//     Top = Chetan,2000

//     */
// }

// ____________ ____________

// 3.2) Using Priority Queue for Creating Pairs -

// int main()
// {
//     priority_queue<pair<string, int>> pq; // default heap - Max heap - On the basis of First Property Always

//     pq.push(make_pair("Aman", 500));
//     pq.push(make_pair("Bhumika", 1000));
//     pq.push(make_pair("Chetan", 2000));

//     while (!pq.empty())
//     {
//         cout << "Top = " << pq.top().first << "," << pq.top().second << endl;
//         pq.pop();
//     }
//     /*
//     priority_queue<pair<string, int>> pq; // default heap - Max heap - On the basis of First Property Always
//     Top = Chetan,2000
//     Top = Bhumika,1000
//     Top = Aman,500
//      */
// }
//----
/*
// If we want to create on the basis of Second Property - need to use Struct
Struct - Struct apna memory Allocation Stacks ke under krte h jabki claases apna memory allocation heap ke undr krti h

 */

struct ComparePair
{
    bool operator()(pair<string, int> &p1, pair<string, int> &p2)
    {
        return p1.second > p2.second;
    }
};
int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;

    pq.push(make_pair("Aman", 500));
    pq.push(make_pair("Bhumika", 1000));
    pq.push(make_pair("Chetan", 2000));

    while (!pq.empty())
    {
        cout << "Top = " << pq.top().first << "," << pq.top().second << endl;
        pq.pop();
    }
    /*
    return p1.second < p2.second; - when the deault the heap - max heap
    Top = Chetan,2000
    Top = Bhumika,1000
    Top = Aman,500
     */

    // For the Min heap - <
    /*
    return p1.second > p2.second;
    Top = Aman,500
    Top = Bhumika,1000
    Top = Chetan,2000

    */
}
// ____________ ____________ ____________ ____________ ____________
