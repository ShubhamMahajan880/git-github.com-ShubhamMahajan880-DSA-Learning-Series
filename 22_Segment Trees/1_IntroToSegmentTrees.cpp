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
// #include<unordered_set>using namespace std;
using namespace std;

//1) Intro to Segment Trees : - 
/*
- Segment Trees - are used to handle the quns based on Range Queries or Update Queries.
- we have discussesd many optimized approches for solvig Range sum or update eleemnt in array.. then  why need to use Segment Trees ?
- Uisng brute force approach the TC's for Query Sum is - O(n) & for update is - O(1)
- while using Optimized Approach(Prefix SUm) the Tc's are  - O(1) & O(n), for respective tasks.
- So, using different optimized approaches we get different doifferent TC's for Query or update tasks. One is optimized while other is not.
- So, in this casw we prefer to approach 2(prefix sum) because range queries O(1) need to use frequent, update O(n) only done sometimes.
- simiallry, in the case when Raange queriwes are less O(n) and update queries are more O(1), then we'll use Brute Force Approach.
- and in the cases wehn both having high priority - Range QUeries as well as Update - Then Nede to use SEGMENT TREES whuch having TC - O(logn) for both.
- If we have an array with n elelments then the Minimum no. of nodes are 2n-1; which is an idle no. of nodes exist in the Segment Trees
- when nnodes in array then Min nodes are - 2n-1, so for avoiding the less nodes we basically takes 4n nodes in Segemnt Trees
- In crearting Segment Tree - the TC will be O(n) but whole using in Query Range or Update operations the TC will be  - O(log n) always.
*/

// class SegmentTree
// {
//     vector<int> tree; // 4*n
//     int n;

// public:
//     SegmentTree(vector<int> &arr)
//     {
//         n = arr.size();
//         tree.resize(4 * n);
//         buildTree(arr, 0, n - 1, 0);
//     }

//     void buildTree(vector<int> &arr, int start, int end, int node) // TC - O(n), Nodes - 2n-1;
//     {
//         if (start == end)
//         {
//             tree[node] = arr[start];
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         buildTree(arr, start, mid, 2 * node + 1); // call for left subtree
//         buildTree(arr, mid + 1, end, 2 * node + 2);// call for Right subtree

//         tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
//     }

//     void printTree()
//     {
//         for (int i = 0; i < tree.size(); i++)
//         {
//             cout << tree[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     // Range Sum Queries -
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

//     SegmentTree st(arr);
//     st.printTree();

//     /*
//     Created Seg,ent Tree Successfully -
//     36 10 26 3 7 11 15 1 2 3 4 5 6 7 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//2) Performing QUeries in Segment Trees  -
/*
- when case of no overlapping - if we need the sum from 2-5 then no need to traverse from 6-7 .
- jb parent(6-7) node pr hi visit krne ki  need nhi h to child node pr to krna hi nhi he
*/

// class SegmentTree
// {
//     vector<int> tree; // 4*n
//     int n;

//     void buildTree(vector<int> &arr, int start, int end, int node) // TC - O(n), Nodes - 2n-1;
//     {
//         if (start == end)
//         {
//             tree[node] = arr[start];
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         buildTree(arr, start, mid, 2 * node + 1);
//         buildTree(arr, mid + 1, end, 2 * node + 2);

//         tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
//     }

//     int rangeSum(int qi, int qj, int si, int sj, int node) // O(log n)
//     {
//         if (qj < si || qi > sj) // No Overlape
//         {
//             return 0;
//         }
//         if (si >= qi && sj <= qj) // Completr Overlap Case
//         {
//             return tree[node];
//         }

//         // Partial Overlap
//         int mid = si + (sj - si) / 2;

//         return rangeSum(qi, qj, si, mid, 2 * node + 1) + rangeSum(qi, qj, mid + 1, sj, 2 * node + 2);
//     }

// public:
//     SegmentTree(vector<int> &arr)
//     {
//         n = arr.size();
//         tree.resize(4 * n);
//         buildTree(arr, 0, n - 1, 0);
//     }

//     void printTree()
//     {
//         for (int i = 0; i < tree.size(); i++)
//         {
//             cout << tree[i] << " ";
//         }
//         cout << endl;
//     }

//     int rangeQuery(int qi, int qj)
//     {
//         return rangeSum(qi, qj, 0, n - 1, 0);
//     }
// };

// int main()
// {
//     // Range Sum Queries -
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

//     SegmentTree st(arr);

//     cout << st.rangeQuery(2, 5) << endl;//18
//     cout << st.rangeQuery(0, 3) << endl;//10
//     cout << st.rangeQuery(6, 7) << endl;//15
//     cout << st.rangeQuery(3, 6) << endl;//22
// }
// ____________ ____________ ____________ ____________ ____________

//3) Update on any index in Segment Tree -

// class SegmentTree
// {
//     vector<int> tree; // 4*n
//     int n;

//     void buildTree(vector<int> &arr, int start, int end, int node) // TC - O(n), Nodes - 2n-1;
//     {
//         if (start == end)
//         {
//             tree[node] = arr[start];
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         buildTree(arr, start, mid, 2 * node + 1);
//         buildTree(arr, mid + 1, end, 2 * node + 2);

//         tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
//     }

//     int rangeSum(int qi, int qj, int si, int sj, int node) // O(log n)
//     {
//         if (qj < si || qi > sj) // No Overlape
//         {
//             return 0;
//         }
//         if (si >= qi && sj <= qj) // Completr Overlap Case
//         {
//             return tree[node];
//         }

//         // Partial Overlap
//         int mid = si + (sj - si) / 2;

//         return rangeSum(qi, qj, si, mid, 2 * node + 1) + rangeSum(qi, qj, mid + 1, sj, 2 * node + 2);
//     }

//     void updateUtil(int idx, int newVal, int start, int end, int node)
//     {
//         if (start == end)
//         {
//             tree[node] = newVal;
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         if (idx >= start && idx <= mid) // left
//         {
//             updateUtil(idx, newVal, start, mid, 2 * node + 1);
//         }
//         else
//         {
//             updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
//         }
//         tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
//     }

// public:
//     SegmentTree(vector<int> &arr)
//     {
//         n = arr.size();
//         tree.resize(4 * n);
//         buildTree(arr, 0, n - 1, 0);
//     }

//     void printTree()
//     {
//         for (int i = 0; i < tree.size(); i++)
//         {
//             cout << tree[i] << " ";
//         }
//         cout << endl;
//     }

//     int rangeQuery(int qi, int qj)
//     {
//         return rangeSum(qi, qj, 0, n - 1, 0);
//     }
//     int updateQuery(int idx, int newVal)
//     {
//         updateUtil(idx, newVal, 0, n - 1, 0);
//     }
// };

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

//     SegmentTree st(arr);

//     cout << st.rangeQuery(0, 3) << endl; // 10

//     st.updateQuery(1,3);
//     cout<<st.rangeQuery(0,3)<<endl;//11
// }
// ____________ ____________ ____________ ____________ ____________

//4) Max Segment Tree - in particular given range
// 4.1) Creation & Query in Max Segment Tree - 
/*
- Everything is same .. only  a little bit change of returning INT_MIN; in Overlapping case. In sum we were returning 0
 */
// class SegmentTree
// {
//     vector<int> tree;
//     int n;

//     void buildTree(vector<int> &nums, int start, int end, int node) // O(n)
//     {
//         if (start == end)
//         {
//             tree[node] = nums[start];
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         buildTree(nums, start, mid, 2 * node + 1);
//         buildTree(nums, mid + 1, end, 2 * node + 2);

//         tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//     }

// public:
//     SegmentTree(vector<int> &nums)
//     {
//         n = nums.size();
//         tree.resize(4 * n);
//         buildTree(nums, 0, n - 1, 0);
//     }

//     void printTree()
//     {
//         for (int i : tree)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     int maxQuery(int qi, int qj, int si, int sj, int node) // O(log n)
//     {
//         if (qi > sj || qj < si) // No Overlap
//         {
//             return INT_MIN;
//         }
//         if (si >= qi && sj <= qj) // completely Iveralp
//         {
//             return tree[node];
//         }
//         // partial Overlap case -
//         int mid = si + (sj - si) / 2;

//         int leftMax = maxQuery(qi, qj, si, mid, 2 * node + 1);
//         int rightMax = maxQuery(qi, qj, mid + 1, sj, 2 * node + 2);

//         return max(leftMax, rightMax);
//     }

//     int rangeQuery(int qi, int qj)
//     {
//         return maxQuery(qi, qj, 0, n - 1, 0);
//     }
// };

// int main()
// {
//     vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};

//     SegmentTree st(nums);
//     st.printTree();
//     // 17 17 4 8 17 3 4 8 -1 2 17 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

//     cout << st.rangeQuery(2, 5) << endl; // 17 - Maximum value in the given range/indexing
//     cout << st.rangeQuery(5, 8) << endl; // 4
// }
// ____________ ____________

//4.2) Update in Range Max Segment Tree - in particular given range
/*
- After updating the max in parent-child will get affected/updated and then return accordingly
- The updation operation is almost similar, the only difference of returning max, instead of adding them.
 */

// class SegmentTree
// {
//     vector<int> tree;
//     int n;

//     void buildTree(vector<int> &nums, int start, int end, int node) // O(n)
//     {
//         if (start == end)
//         {
//             tree[node] = nums[start];
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         buildTree(nums, start, mid, 2 * node + 1);
//         buildTree(nums, mid + 1, end, 2 * node + 2);

//         tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//     }

//     void updateUtil(int idx, int newVal, int start, int end, int node) // O(log n)
//     {
//         if (start == end)
//         {
//             tree[node] = newVal;
//             return;
//         }
//         int mid = start + (end - start) / 2;

//         if (idx >= start && idx <= mid) // Left
//         {
//             updateUtil(idx, newVal, start, mid, 2 * node + 1);
//         }
//         else
//         {
//             updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
//         }
//         tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
//     }

// public:
//     SegmentTree(vector<int> &nums)
//     {
//         n = nums.size();
//         tree.resize(4 * n);
//         buildTree(nums, 0, n - 1, 0);
//     }

//     void printTree()
//     {
//         for (int i : tree)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     int maxQuery(int qi, int qj, int si, int sj, int node) // O(log n)
//     {
//         if (qi > sj || qj < si) // No Overlap
//         {
//             return INT_MIN;
//         }
//         if (si >= qi && sj <= qj) // completely Iveralp
//         {
//             return tree[node];
//         }
//         // partial Overlap case -
//         int mid = si + (sj - si) / 2;

//         int leftMax = maxQuery(qi, qj, si, mid, 2 * node + 1);
//         int rightMax = maxQuery(qi, qj, mid + 1, sj, 2 * node + 2);

//         return max(leftMax, rightMax);
//     }

//     int rangeQuery(int qi, int qj)
//     {
//         return maxQuery(qi, qj, 0, n - 1, 0);
//     }

//     void updateQuery(int idx, int newVal)
//     {
//         updateUtil(idx, newVal, 0, n - 1, 0);
//     }
// };

// int main()
// {
//     vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};

//     SegmentTree st(nums);
//     st.printTree();
//     // 17 17 4 8 17 3 4 8 -1 2 17 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

//     cout << st.rangeQuery(2, 5) << endl; // 17
//     cout << st.rangeQuery(5, 8) << endl; // 4

//     st.updateQuery(4, 5);
//     cout << st.rangeQuery(0, 8) << endl; // 8
//     st.printTree();
//     // 8 8 4 8 5 3 4 8 -1 2 5 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// }
// ____________ ____________ ____________ ____________ ____________

//5) Range Min Segment Tree - Creation, Query & Update in particular given range

class SegmentTree
{
    vector<int> tree;
    int n;

    void buildTree(vector<int> &nums, int start, int end, int node) // O(n)
    {
        if (start == end)
        {
            tree[node] = nums[start];
            return;
        }
        int mid = start + (end - start) / 2;

        buildTree(nums, start, mid, 2 * node + 1);
        buildTree(nums, mid + 1, end, 2 * node + 2);

        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

    void updateUtil(int idx, int newVal, int start, int end, int node) // O(log n)
    {
        if (start == end)
        {
            tree[node] = newVal;
            return;
        }
        int mid = start + (end - start) / 2;

        if (idx >= start && idx <= mid) // Left
        {
            updateUtil(idx, newVal, start, mid, 2 * node + 1);
        }
        else
        {
            updateUtil(idx, newVal, mid + 1, end, 2 * node + 2);
        }
        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

public:
    SegmentTree(vector<int> &nums)
    {
        n = nums.size();
        tree.resize(4 * n);
        buildTree(nums, 0, n - 1, 0);
    }

    void printTree()
    {
        for (int i : tree)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    int minQuery(int qi, int qj, int si, int sj, int node) // O(log n)
    {
        if (qi > sj || qj < si) // No Overlap
        {
            return INT_MAX;
        }
        if (si >= qi && sj <= qj) // completely Iveralp
        {
            return tree[node];
        }
        // partial Overlap case -
        int mid = si + (sj - si) / 2;

        int leftMin = minQuery(qi, qj, si, mid, 2 * node + 1);
        int rightMin = minQuery(qi, qj, mid + 1, sj, 2 * node + 2);

        return min(leftMin, rightMin);
    }

    int rangeQuery(int qi, int qj)
    {
        return minQuery(qi, qj, 0, n - 1, 0);
    }

    void updateQuery(int idx, int newVal)
    {
        updateUtil(idx, newVal, 0, n - 1, 0);
    }
};

int main()
{
    vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};

    SegmentTree st(nums);
    st.printTree();
    // 17 17 4 8 17 3 4 8 -1 2 17 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

    cout << st.rangeQuery(2, 5) << endl;//-1
    cout << st.rangeQuery(5, 8) << endl;//4

    st.updateQuery(4, 5);
    cout << st.rangeQuery(0, 8) << endl;//2
    st.printTree();
    //2 2 4 8 2 3 4 8 -1 2 5 1 3 2 4 6 8 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________