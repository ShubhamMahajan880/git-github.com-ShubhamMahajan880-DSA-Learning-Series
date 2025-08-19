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

//4) Quns using STL Containers  - 

//4.1) Pair Sum/Two SUm/Target Sum -

// int main()
// {
//     int arr[7] = {1, 2, 7, 11, 15, 5, 9};
//     int n = 7;
//     int target = 9;

//     unordered_map<int, int> m; // key = arr[i], val = i;

//     for (int i = 0; i < n; i++)
//     {
//         int comp = target - arr[i];
//         if (m.count(comp))
//         {
//             cout << "ans = " << m[comp] << "," << i << endl;
//             break;
//         }
//         m[arr[i]] = i;
//     }
//     /*
//     ans = 1,2
//      */
// }
// ____________ ____________

//4.2) Majority Element  -
/*
- This qun could also be solved using Array/Vector butfor large data there was need of huge Space Complecity
- Same while using Stack/LL - It took this in Linear time O(n), SO using the Map could be done in O(1) time.
 */

// void majorityElement(vector<int> nums)
// {
//     unordered_map<int, int> m; // <element,freq>
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (m.count(nums[i]))
//         {
//             m[nums[i]]++;
//         }
//         else
//         {
//             m[nums[i]] = 1;
//         }
//     }

//     for (pair<int, int> p : m)
//     {
//         if (p.second > nums.size() / 3)
//         {
//             cout << p.first << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
//     vector<int> num2 = {1, 2};

//     majorityElement(nums); // 1
//     majorityElement(num2);// 2 1

// }
// ____________ ____________

//4.3) Valid Anagram -

// bool validAnagrams(string s, string t)
// {
//     if (s.size() != t.size())
//     {
//         return false;
//     }

//     // s<char, freq>
//     unordered_map<char, int> freq;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (freq.count(s[i]))
//         {
//             freq[s[i]]++;
//         }
//         else
//         {
//             freq[s[i]] = 1;
//         }
//     }

//     // 2nd to look for t's chars in freq
//     for (int i = 0; i < t.size(); i++)
//     {
//         if (freq.count(t[i]))
//         {
//             freq[t[i]]--;
//             if (freq[t[i]] == 0)
//             {
//                 freq.erase(t[i]);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     return freq.size() == 0;
// }

// int main()
// {
//     string s = "shruti";
//     string t = "madhuri";

//     cout << validAnagrams(s, t) << endl;
//     /*
//     string s = "race";
//     string t = "care";
//     1

//     string s = "shruti";
//     string t = "madhuri";
//     0
//     */
// }
// ____________ ____________

//4.4) Count Distinct -

// int countDistinct(vector<int> arr)
// {
//     unordered_set<int> s;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         s.insert(arr[i]);
//     }

//     for (int el : s)
//     {
//         cout << el << " ";
//     }
//     cout << endl;
//     return s.size();
// }
// int main()
// {
//     vector<int> arr = {4, 3, 2, 5, 6, 7, 3, 4, 2, 1};

//     cout << "count = " << countDistinct(arr) << endl;
//     /*
//     1 7 6 4 3 2 5
//     count = 7

//      */
// }
// ____________ ____________

//4.5) Union & Interesection -

// void printUnion(vector<int> arr1, vector<int> arr2)
// {
//     unordered_set<int> s;

//     for (int el : arr1)
//     {
//         s.insert(el);
//     }

//     for (int el : arr2)
//     {
//         s.insert(el);
//     }

//     // Print Union
//     for (int el : s)
//     {
//         cout << el << " ";
//     }
//     cout << endl;
// }

// void printIntersection(vector<int> arr1, vector<int> arr2)
// {
//     unordered_set<int> s;
//     for (int el : arr1)
//     {
//         s.insert(el);
//     }

//     for (int el : arr2)
//     {
//         if (s.find(el) != s.end())
//         {
//             cout << el << " ";
//             s.erase(el);
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> arr1 = {7, 3, 9};
//     vector<int> arr2 = {6, 3, 9, 2, 9, 4};

//     cout << "Union : " << endl;
//     printUnion(arr1, arr2);

//     cout << "Similarly, Intersection is - " << endl;
//     printIntersection(arr1, arr2);

//     /*
//     Union :
//     4 2 7 3 9 6
//     Similarly, Intersection is -
//     3 9
//      */
// }
// ____________ ____________

//4.6) itinerary From Tickets -
/*
In this qun - the most important thing is to find the startting point.
- Vo point jis pr hm khi se aanhi rhe . First initial starting point hi he vo.
- Jo FROM me to exist krta h but, To me exist nhi krta
- Endinhg point vh hoga jo From me exist nhi krta. Jaha se ab hm kahi nhi jaa rhe h. Jo last point he . Jis pr kahi na kahi se kevel aa hi rhe h
 */

// void printItineraryr(unordered_map<string, string> tickets)
// {
//     // Starting Point
//     unordered_set<string> to;

//     for (pair<string, string> ticket : tickets) // from, to
//     {
//         to.insert(ticket.second);
//     }

//     string start = "";
//     for (pair<string, string> ticket : tickets)
//     {
//         if (to.find(ticket.first) == to.end()) // Starting Point
//         {
//             start = ticket.first;
//         }
//     }

//     // Plan Print
//     cout << start << "->";
//     while (tickets.count(start))
//     {
//         cout << tickets[start] << "->";
//         start = tickets[start];
//     }
//     cout << "destination " << endl;
// }

// int main()
// {
//     unordered_map<string, string> tickets;
//     tickets["Chennai"] = "Bengaluru";
//     tickets["Mumbai"] = "Delhi";
//     tickets["Goa"] = "Chennai";
//     tickets["Delhi"] = "Goa";

//     printItineraryr(tickets);
//     /*
//     Mumbai->Delhi->Goa->Chennai->Bengaluru->destination

//     */
// }
// ____________ ____________

//4.7) Largest Subarray with sum 0 -

/*
Largest subarray chahiye, to index value jitni chhoti ho utna accha.
 */

// int largestSubArWith0Sum(vector<int> arr)
// {
//     unordered_map<int, int> m; // sum,idx
//     int sum = 0;
//     int ans = 0;

//     for (int j = 0; j < arr.size(); j++)
//     {
//         sum += arr[j];

//         if (m.count(sum))
//         {
//             int currLen = j - m[sum]; // j-idx
//             ans = max(ans, currLen);
//         }
//         else
//         {
//             m[sum] = j;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
//     cout << "Largest Subarray with sum 0: " << largestSubArWith0Sum(arr) << endl;
//     /*
//     Largest Subarray with sum 0: 5

//      */
// }
// ____________ ____________

//4.8) Count of Subarray sum Equals to K -
/*
- hr array ke liye ek khaali waala subarray hmwsha exist krta he jiska count he 1 & sum he - 0.[Null Subarray]
- Formula which we're using - sum[i,j] = sum[j] - sum[i] : is one of the most useful formula using in different scenarios and quns
 */

// int subarrayCountWithK(vector<int> arr, int K) // O(N)
// {
//     unordered_map<int, int> m; // Sum,Count
//     m[0] = 1;
//     int sum = 0;
//     int ans = 0;

//     for (int j = 0; j < arr.size(); j++)
//     {
//         sum += arr[j];
//         if (m.count(sum - K))
//         {
//             ans += m[sum - K];
//         }
//         if (m.count(sum))
//         {
//             m[sum]++;
//         }
//         else
//         {
//             m[sum] = 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3};
//     int K = 3;

//     cout << "Subarray Count - " << subarrayCountWithK(arr, K) << endl;
//     /*
//     vector<int> arr = {10, 2, -2, -20, 10};
//     int K = -10;
//     Subarray Count - 3

//     vector<int> arr = {1, 2, 3};
//     int K = 3;
//     Subarray Count - 2

//      */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________