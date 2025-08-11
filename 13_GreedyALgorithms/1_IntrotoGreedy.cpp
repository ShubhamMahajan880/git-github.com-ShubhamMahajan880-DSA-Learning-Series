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

// Greedy ALgorithms -
// 1) Activity Selection Problem  -

// // In the Activity Selection Problem -  we can select a activity at a time. And if activities are overlapping then need to select only one.
// int maxActivities(vector<int> start, vector<int> end)
// {
//     // If end time not givwn sorted then first sort the end time, then start t oappraoch
//     // A0 selection as first least end tym
//     int count = 1;
//     cout << "Selecting A0" << endl;
//     int currEndTime = end[0];

//     for (int i = 0; i < start.size(); i++)
//     {
//         if (start[i] >= currEndTime) // selction of Non-Oerlapping Actitvity using end condition of respective activity by comparing with updated End activity timing
//         {
//             cout << "Selecting A" << i << endl;
//             count++;
//             currEndTime = end[i];
//         }
//     }

//     return count;
// };
// int main()
// {
//     vector<int> start = {1, 3, 0, 5, 8, 5};
//     vector<int> end = {2, 4, 6, 7, 9, 9};
//     cout << "So, the maximum Actitvites which can be perfomed are - " << endl;
//     cout << maxActivities(start, end) << endl;

//     /*
// So, the maximum Actitvites which can be perfomed are -
// Selecting A0
// Selecting A1
// Selecting A3
// Selecting A4
// 4

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Pair in C++ : STL container to store 2 objects

// /*  in start & end container of both are unsorted  then need to sort both , so using STL can be done both pairwise sorting
//     As in vector we use int datatype, similarly by using vector with pair we can store differetn differertn datatypes

//     Syntax of Pair -
//    ➖ vector<pair<DATATYPE1><DATATYPE2>NAMEOFPAIR(sizeofpair, make_pair(0,0)) - created a size of pair with 0,0
//     Cam also create manually by making pairs -
//    ➖ vector<pair<int><int>ActivityPair(3, make_pair(0,0)) - 3 pairs of 0,0 has been created
//  */
// bool comparision1(pair<int, int> p1, pair<int, int> p2)
// // In comparision we can perform any of the function while Asceding of firsr OR Descending of first OR Ascending of Second OR Descending of Second
// {
//     return p1.second < p2.second; // Ascending of End
// }
// bool comparision2(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.second > p2.second; // Descending of End
// }
// bool comparision3(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.first < p2.first; // Ascending of Start
// }
// bool comparision4(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.first > p2.first; // Descending of Start
// }

// int main()
// {

//     vector<int> start = {0, 1, 2};
//     vector<int> end = {9, 2, 4};

//     vector<pair<int, int>> activity(3, make_pair(0, 0));
//     activity[0] = make_pair(0, 9);
//     activity[1] = make_pair(1, 2);
//     activity[2] = make_pair(2, 4);

//     cout << "So, the create pair are - " << endl;
//     for (int i = 0; i < activity.size(); i++)
//     {
//         cout << "A" << i << " : " << activity[i].first << "," << activity[i].second << endl;
//     }
//     /*
//     So, the create pair are -
//     A0 : 0,9
//     A1 : 1,2
//     A2 : 2,4
//     */

//     // For sort the pairs -
//     sort(activity.begin(), activity.end(), comparision1); // sorting using comparision1 function

//     cout << "After Sorting when second increasing OR End TIme Ascending _________" << endl;

//     cout << "So, the create pair are - " << endl;
//     for (int i = 0; i < activity.size(); i++)
//     {
//         cout << "A" << i << " : " << activity[i].first << "," << activity[i].second << endl;
//     }

//     /*

// So, the create pair are -
// A0 : 0,9
// A1 : 1,2
// A2 : 2,4
// After Sorting when second increasing OR End TIme Ascending _________
// So, the create pair are -
// A0 : 1,2
// A1 : 2,4
// A2 : 0,9

//      */

//     sort(activity.begin(), activity.end(), comparision2); // sorting using comparision2 function

//     cout << "After Sorting when second decreasing OR End TIme Descending _________" << endl;

//     cout << "So, the create pair are - " << endl;
//     for (int i = 0; i < activity.size(); i++)
//     {
//         cout << "A" << i << " : " << activity[i].first << "," << activity[i].second << endl;
//     }

//     /*

//     So, the create pair are -
//     A0 : 0,9
//     A1 : 1,2
//     A2 : 2,4
//     After Sorting when second decreasing OR End TIme Descending _________
//     So, the create pair are -
//     A0 : 0,9
//     A1 : 2,4
//     A2 : 1,2
//      */

//     sort(activity.begin(), activity.end(), comparision3); // sorting using comparision3 function

//     cout << "After Sorting when first increasing OR End TIme Ascending _________" << endl;

//     cout << "So, the create pair are - " << endl;
//     for (int i = 0; i < activity.size(); i++)
//     {
//         cout << "A" << i << " : " << activity[i].first << "," << activity[i].second << endl;
//     }
//     /*

//     So, the create pair are -
//     A0 : 0,9
//     A1 : 1,2
//     A2 : 2,4
//     After Sorting when first increasing OR End TIme Ascending _________
//     So, the create pair are -
//     A0 : 0,9
//     A1 : 1,2
//     A2 : 2,4
//      */

//     sort(activity.begin(), activity.end(), comparision4); // sorting using comparision4 function

//     cout << "After Sorting when first decreSING OR End TIme Descending _________" << endl;

//     cout << "So, the create pair are - " << endl;
//     for (int i = 0; i < activity.size(); i++)
//     {
//         cout << "A" << i << " : " << activity[i].first << "," << activity[i].second << endl;
//     }
//     /*

//     So, the create pair are -
//     A0 : 0,9
//     A1 : 1,2
//     A2 : 2,4
//     After Sorting when first decreSING OR End TIme Descending _________
//     So, the create pair are -
//     A0 : 2,4
//     A1 : 1,2
//     A2 : 0,9
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 3) Fractional Knapsack Problem -

// /*
// 1.1 - Generally Jaha Quns me Maximum/minimum use ho rhe hote h and apart from Array, String(maxisum subarray, substring,subsequence,maxsu,minsum)
// then most probably chances for the application of => Greedy Algo's.
// 1.2 - Jaha ya to lenge ya phr nahi lenge - we use => 0-1 Knapsak Problem. [TV,Freze,Washing Machine]
// but jaha quantitymatter kr jati he [halfkg, 1 kg, 5 kg - suga,salt,oil] which can be inside Kanpsack(Bora,thela) then we use  => Fractioal Kapsack Problem.

// 1.3 - Greedy algo - yahi kahti he ki for gtting the Global Max need to choose local max - so that we can get the optimixed global max
//  */

// bool compare(pair<double, int> p1, pair<double, int> p2)
// {
//     return p1.first > p2.first; // descending values based on ratio
// }

// int fractionalKnapsackProblem(vector<int> val, vector<int> wt, int w)
// {
//     int n = val.size();
//     vector<pair<double, int>> ratio(n, make_pair(0.0, 0)); // pair of (ratio, idx) -> (double,int)

//     for (int i = 0; i < n; i++)
//     {
//         double r = val[i] / (double)wt[i];
//         ratio[i] = make_pair(r, i);
//     }

//     sort(ratio.begin(), ratio.end(), compare);
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int idx = ratio[i].second; // wt,val
//         if (wt[idx] <= w)
//         {
//             ans += val[idx];
//             w -= wt[idx];
//         }
//         else
//         {
//             ans += ratio[i].first * w;
//             w = 0;
//             break;
//         }
//     }

//     cout << "Max Value - " << ans << endl;
//     return ans;
// }

// int main()
// {
//     vector<int> val = {60, 100, 120};
//     vector<int> wt = {10, 20, 30};
//     int w = 50;

//     fractionalKnapsackProblem(val, wt, w);
//     return 0;
//     /*
//     Max Value - 240
//     TC - O(n+nlogn+n) = O(nlogn)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Minimum Absolute DIfferent Pairs -

// /* For Minimum Absolute DOIfference between two same data structures is simply sort both and get the difference pairwise respectively
//  */

// void absoluteDifference(vector<int> A, vector<int> B)
// {
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end());

//     int absDiff = 0;

//     for (int i = 0; i < A.size(); i++)
//     {
//         absDiff += abs(A[i] - B[i]);
//     }

//     cout << "Min Absolute Difference is - " << absDiff << endl;
// }

// int main()
// {
//     /*
//     vector<int> A = {4, 1, 8, 7};
//     vector<int> B = {2, 3, 6, 5};

//     absoluteDifference(A, B);
//     /*
//     Min Absolute Difference is - 6

//      */

//     vector<int> A = {1, 2, 3};
//     vector<int> B = {3, 2, 1};

//     absoluteDifference(A, B);
//     /*
//     Min Absolute Difference is - 0

//      */

//     return 0;
// }
// ____________ ____________ ____________ ____________ ____________

// 5) Maximum Chain Length of Pairs -

// /* In tjhs we are here sorting pair wise and comparing using second should be less than for another's first
//  */
// bool compare(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.second < p2.second; // ascending condition for element 2
// }

// int maxChainLength(vector<pair<int, int>> pairs)
// {
//     int n = pairs.size();

//     sort(pairs.begin(), pairs.end(), compare);
//     int ans = 1;
//     int currEnd = pairs[0].second;

//     for (int i = 1; i < n; i++)
//     {
//         if (pairs[i].first > currEnd)
//         {
//             ans++;
//             currEnd = pairs[i].second;
//         }
//     }

//     cout << "maximum Chain Length = " << ans << endl;
//     return ans;
// }

// int main()
// {
//     int n = 5;
//     vector<pair<int, int>> pairs(n, make_pair(0, 0));
//     pairs[0] = make_pair(5, 24);
//     pairs[1] = make_pair(39, 60);
//     pairs[2] = make_pair(5, 28);
//     pairs[3] = make_pair(27, 40);
//     pairs[4] = make_pair(50, 90);

//     maxChainLength(pairs);
//     return 0;
// /*
// maximum Chain Length = 3
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Indian Coins Problem -

// int getMinChange(vector<int> coins, int v)
// {
//     int ans = 0;
//     int n = coins.size();

//     for (int i = n - 1; i >= 0 && v > 0; i--)
//     {
//         if (v >= coins[i])
//         {
//             ans += v / coins[i];
//             v = v % coins[i];
//         }
//         // cout << "Coins we are counting - " << coins[i] << endl;
//     }
//     cout << "Min coins for change for value is- " << ans << endl;
//     return ans;
// }
// int main()
// {
//     vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
//     int v = 590; // value
//     getMinChange(coins, v);
//     getMinChange(coins, 121);
//     getMinChange(coins, 1525);
//     /*
//     Min coins for change for value is- 4
//     Min coins for change for value is- 3
//     Min coins for change for value is- 5

//     TC  -O(N) - When already given in the sorted manner, but when need to sort then the compexity will be O(nlogn)
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 7) Job Sequencing Problem -

// bool compare(pair<int, int> p1, pair<int, int> p2)
// {
//     return p1.second > p2.second;
// }

// int maxProfit(vector<pair<int, int>> jobs)
// {
//     sort(jobs.begin(), jobs.end(), compare);
//     // first -> deadline, second->profit

//     int profit = jobs[0].second;
//     int safeDeadline = 2;

//     for (int i = 1; i < jobs.size(); i++)
//     {
//         if (jobs[i].first >= safeDeadline)
//         {
//             profit += jobs[i].second;
//             safeDeadline++;
//         }
//     }
//     cout << "max profit from jobs  - " << profit << endl;
//     return profit;
// }

// int main()
// {
//     int n = 4;
//     vector<pair<int, int>> jobs(n, make_pair(0, 0));
//     jobs[0] = make_pair(4, 20);
//     jobs[1] = make_pair(1, 10);
//     jobs[2] = make_pair(1, 40);
//     jobs[3] = make_pair(1, 30);

//     maxProfit(jobs);
//     return 0;
//     /*
//     max profit from jobs  - 60

//      */
// }

// ____________ ____________

// 7.1) Jonb Sequencing , print the multiple valies - which job , how much profit.
/*
In case when need to print the multipe values - current value, profit, indexing then it can be
done by creating the class, constructor and taking the emplace_back functionality of vector.
- push back also used overr emplace_back but then need to pass the object by string all the values explicitly

- Compare function can also be implements withing single line at the possiiton using Lambda Function.
Lambda function is created by declaring a library [].
 */

// class Job
// {
// public:
//     int idx;
//     int deadline;
//     int profit;

//     Job(int idx, int deadline, int profit)
//     {
//         this->idx = idx;
//         this->deadline = deadline;
//         this->profit = profit;
//     }
// };

// int maxProfit(vector<pair<int, int>> pairs)
// {
//     int n = pairs.size();
//     vector<Job> jobs;

//     for (int i = 0; i < n; i++)
//     {
//         jobs.emplace_back(i, pairs[i].first, pairs[i].second); // idx, profit, deadline
//     }

//     sort(jobs.begin(), jobs.end(), [](Job &a, Job &b)
//          {
//              return a.profit > b.profit; // // descending order on the bbasis of profit
//          });

//     cout << "Selecting Job - " << jobs[0].idx << endl;
//     int profit = jobs[0].profit;
//     int safeDeadline = 2;

//     for (int i = 1; i < n; i++)
//     {
//         if (jobs[i].deadline >= safeDeadline)
//         {
//             cout << "Selecting Job " << jobs[i].idx << endl;
//             profit += jobs[i].profit;
//             safeDeadline;
//         }
//     }
//     cout << "max profit  is - " << profit << endl;
//     return profit;
// }
// int main()
// {
//     int n = 4;
//     vector<pair<int, int>> jobs(n, make_pair(0, 0));
//     jobs[0] = make_pair(4, 20);
//     jobs[1] = make_pair(1, 10);
//     jobs[2] = make_pair(1, 40);
//     jobs[3] = make_pair(1, 30);

//     maxProfit(jobs);
//     /*
//     Selecting Job - 2
//     Selecting Job 0
//     max profit  is - 60
// The output shows the clr order of selection of jobs.     
//      */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
