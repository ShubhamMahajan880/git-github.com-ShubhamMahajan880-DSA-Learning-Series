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

int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return tilingProblem(n - 1) + tilingProblem(n - 2);
}
int main()
{
    cout << tilingProblem(2)<<endl;
    cout << tilingProblem(3)<<endl;
    cout << tilingProblem(4)<<endl;
    cout << tilingProblem(5)<<endl;
}