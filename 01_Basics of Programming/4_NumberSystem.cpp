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

//  Code for Binary to Decimal Conversion -
// void binToDec(int binNum)
// {
//     int n = binNum;
//     int decNum = 0;
//     int pow = 1; // 2^0 2^1 2^2 2^3..

//     while (n > 0)
//     {
//         int lastDig = n % 10;
//         decNum += lastDig * pow;
//         pow = pow * 2;
//         n = n / 10;
//     }
//     cout << decNum << endl;
// }
// int main()
// {
//     // Size of for different int data types -
//     // cout<<sizeof(int)<<endl;//4
//     // cout<<sizeof(long int)<<endl;//4
//     // cout<<sizeof(short int)<<endl;//2
//     // cout<<sizeof(long long int)<<endl;//8

//     binToDec(101);//5
//     binToDec(1011);//11
//     binToDec(1111);//15
// }
// ____________ ____________ ____________ ____________ ____________

// COde for Decimal to Binary -

void DecToBin(int DecNum)
{
    int n = DecNum;
    int pow = 1; // 10^0, 10^1, 10^2...
    int BinNum = 0;

    while (n > 0)
    {
        int rem = n % 2;
        BinNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    cout<<BinNum<<endl;
}

int main()
{
    DecToBin(15);//1111
    DecToBin(4);//100
}

/* 
Do the comparision b/w botht the methods - 
in Bin to Dec - Modulus by 10 as well as devide by 10 and pow of 2, while
in Dec to Bin - Modulues/Remainder by 2 as well as divide by 2 and pow of 10
 */

 // ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________