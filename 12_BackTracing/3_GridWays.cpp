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

//5) GridWays Problem - 

int gridWays(int r, int c, int n, int m, string ans)
{
    if (r == n - 1 && c == m - 1) // hitting the base case
    {
        cout << ans << endl;
        return 1;
    }

    if (r >= n || c >= m) // another base condition where no way exist dude
    {
        return 0;
    }

    // Right
    int val1 = gridWays(r, c + 1, n, m, ans + "R");

    // down
    int val2 = gridWays(r + 1, c, n, m, ans + "L");

    return val1 + val2;
}

int main()
{
    int n, m;
    cout << "Give values for rows(N) & colms(M) - " << endl;
    cin >> n >> m;
    string ans = "";

    cout << gridWays(0, 0, n, m, ans);
    return 0;
    /*
Give values for rows(N) & colms(M) -
3 3
RRLL
RLRL
RLLR
LRRL
LRLR
LLRR
6

4 4
RRRLLL
RRLRLL
RRLLRL
RRLLLR
RLRRLL
RLRLRL
RLRLLR
RLLRRL
RLLRLR
RLLLRR
LRRRLL
LRRLRL
LRRLLR
LRLRRL
LRLRLR
LRLLRR
LLRRRL
LLRRLR
LLRLRR
LLLRRR
20
📒 usi target cell pr h and usi target cell pr pahuchna he to bhi 1 tarika hoga hi

TC -
SC -
*/
}

// ------------------- Optimization in Grid Ways - 
/* 
Using Pemutations & Combinations approaches - for in Linear Time
n=3,m=3 - so n-1 = 2, m-1 = 2
so (x+y)!/x! y! = So getting as 4!/2!2! = 6

 */

 // ____________ ____________ ____________ ____________ ____________
