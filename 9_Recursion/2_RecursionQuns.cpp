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
// Tiling problem
// int tilingProblem(int n) // 2*n
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     // vertical
//     int ans1 = tilingProblem(n - 1); // 2*n-1

//     // horizontal
//     int ans2 = tilingProblem(n - 2); // 2*n-2

//     int ans = ans1 + ans2;
// }

// int main()
// {
//     cout << tilingProblem(2) << endl; // 2
//     cout << tilingProblem(3) << endl; // 3
//     cout << tilingProblem(4) << endl; // 5
//     cout << tilingProblem(5) << endl; // 8
// }
// ____________ ____________

// Remove Duplicates from the String -

// void removeDuplicates(string str, string ans, int i, int map[26])
// {
//     if (i == str.size())
//     {
//         cout << "ans : " << ans << endl;
//         return;
//     }

//     char ch = str[i];
//     int mapIdx = (int)(ch - 'a');

//     if (map[mapIdx] == true) // duplicate
//     {
//         removeDuplicates(str, ans, i + 1, map);
//     }
//     else // duplicate
//     {
//         map[mapIdx] = true;
//         removeDuplicates(str, ans + str[i], i + 1, map);
//     }
// }
// int main()
// {
//     string str = "Miicrosofft Hyderabaaaad";
//     string ans = "";
//     int map[26] = {false};

//     removeDuplicates(str, ans, 0, map);//ans : Microsft Hydeab
// }
// ____________ ____________ 

// Friends Pairing Problem - 


