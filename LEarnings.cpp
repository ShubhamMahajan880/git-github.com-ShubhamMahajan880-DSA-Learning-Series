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

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + Sum(n - 1);
}
int main()
{
    cout<<Sum(5)<<endl;//15
    cout<<Sum(6)<<endl;//21
    cout<<Sum(10)<<endl;//55
}
