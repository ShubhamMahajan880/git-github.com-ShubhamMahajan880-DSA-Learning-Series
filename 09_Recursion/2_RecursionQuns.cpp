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

// 3) Tiling problem

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

//     int ans = ans1 + ans2; //Or we could dirctly in a single line as  - return ans = tilingProblem(n-1)+tilingProblem(n-2)
// }

// int main()
// {
//     cout << tilingProblem(2) << endl; // 2
//     cout << tilingProblem(3) << endl; // 3
//     cout << tilingProblem(4) << endl; // 5
//     cout << tilingProblem(5) << endl; // 8
// }
// ____________ ____________ ____________ ____________ ____________

// 4) Remove Duplicates from the String -

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
// ____________ ____________ ____________ ____________ ____________

// 5) Friends Pairing Problem -

// int FriendPairing(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n;
//     }
//     return FriendPairing(n - 1) + (n - 1) * FriendPairing(n - 2);
// }
// int main()
// {
//     cout << FriendPairing(3) << endl;//4
//     cout << FriendPairing(4) << endl;//10
//     cout << FriendPairing(5) << endl;//26
//     cout << FriendPairing(6) << endl;//76
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Binary String Problm -

// void binaryString(int n, int lastPlace, string ans)
// {
//     if (n == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     if (lastPlace != 1)
//     {
//         binaryString(n - 1, 0, ans + '0');
//         binaryString(n - 1, 1, ans + '1');
//     }
//     else
//     {
//         binaryString(n - 1, 0, ans + '0');
//     }
// }
// int main()
// {
//     string ans = "";
//     binaryString(2, 0, ans);
//     /*
//     00
//     01
//     10
//      */
//     cout<<endl;
//     binaryString(3, 0, ans);
//     /*
//     000
//     001
//     010
//     100
//     101
//      */
//     cout << endl;
//     binaryString(4, 0, ans);
//     /*
//     0000
//     0001
//     0010
//     0100
//     0101
//     1000
//     1001
//     1010
//      */
//     cout << endl;
//     binaryString(5, 0, ans);
//     /*
//     00000
//     00001
//     00010
//     00100
//     00101
//     01000
//     01001
//     01010
//     10000
//     10001
//     10010
//     10100
//     10101

//      */
//     cout << endl;
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________