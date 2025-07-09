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

//1) Backtracking In Arrays -

// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void changeArray(int arr[], int n, int i)
// {
//     if (i == n)

//     {
//         printArray(arr, n);
//         return;
//     }

//     arr[i] = i + 1; // Pehle upr waale saare levels ko call lganuynge, jb upr waale saare level khtm ho jaynge tb base case execute hine ke baad condition return hogi and backtrack hoga
//     changeArray(arr, n, i + 1);
//     arr[i] -= 2; // Call through Backtrack
// }
// int main()
// {
//     int arr[5] = {0}; // initialized with 0 and adding the values in it. using the loop variable itslef
//     int n = 5;

//     changeArray(arr, n, 0);
//     printArray(arr, n);
//     /*
//     After the changes aray is -
//     1 2 3 4 5
//     After the changes aray is -
//     -1 0 1 2 3
//      */
// }
// ____________ ____________ ____________ ____________ ____________

//2) Find Subsets/Substrings -

// void printSubsets(string str, string subset)
// {

//     if (str.size() == 0) // Base condition wehnstring end or no any character remains/length == 0
//     {
//         cout << subset << endl; // Printing all subsets we got
//         return;
//     }

//     char ch = str[0];

//     // yes Choice, include the character as substring
//     printSubsets(str.substr(1, str.size() - 1), subset + ch);

//     // No choice, when not adding the char as substring
//     printSubsets(str.substr(1, str.size() - 1), subset);
// }
// int main()
// {
//     string str;
//     string subset = "";

//     cout << "mention the string - " << endl;
//     getline(cin, str);

//     cout << "So, the inserted string is - " << endl;
//     cout << "finally, the subset stringt is - " << endl;
//     printSubsets(str, subset);
//     /*
//     mention the string -
//     abc
//     So, the inserted string is -
//     finally, the subset stringt is -
//     abc
//     ab
//     ac
//     a
//     bc
//     b
//     c
// "Here is Empty Subset at last"

// mention the string -
// 123
// So, the inserted string is -
// finally, the subset stringt is -
// 123
// 12
// 13
// 1
// 23
// 2
// 3
// "Here is Empty Subset at last"
// 📒 Empty string is always a subset for evry string and count as 1 subset/substring

// TC - O(2^n) as 2^n subsets or also through Recursive Relations T(n) = 2*T(n-1) + O(1)
// SC - O(n)
// */
// }
// ____________ ____________ ____________ ____________ ____________

//3) Find Permutations -

// void permutations(string str, string ans)
// {
//     int n = str.size();

//     if (n == 0)
//     {
//         cout << ans << endl;
//         return;
//     }

//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];                                                 // selectingn 1st char from string
//         string nextStr = str.substr(0, i) + str.substr(i + 1, n-i-1); // performing for next char after 1st char
//         permutations(nextStr, ans + ch);                                  // ith char choice to add in permutation
//     }
// }
// int main()
// {
//     string str;
//     string ans = "";
//     cout << "mention the string wanna permuted.." << endl;
//     getline(cin, str);

//     cout << "So, all the permutations of given string are  - " << endl;

//     permutations(str, ans);
// /*
// mention the string wanna permuted..
// abc
// So, all the permutations of given string are  -
// abc
// acb
// bac
// bca
// cab
// cba

// mention the string wanna permuted..
// 123
// So, all the permutations of given string are  -
// 123
// 132
// 213
// 231
// 312
// 321

// TC - O(n!)
// SC - O(n)
//  */
// }
// ____________ ____________ ____________ ____________ ____________

