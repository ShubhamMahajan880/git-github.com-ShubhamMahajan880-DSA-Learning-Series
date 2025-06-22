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
#define g 9.8; // macro in cpp
using namespace std;

//1) Basic Into to programming and Fundamentals
int main()
{
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;

    cout << "PI = " << PI << endl;
    cout << "PI 2 = " << PI2 << endl;

    // PI = 3.14159 - by defaalut the precision is 5. for increment it we can use setprecision function
    // PI 2 = 3.14159

    // setprecision function
    cout << setprecision(10) << "PI = " << PI << endl;
    cout << setprecision(10) << "PI2 = " << PI2 << endl;

    // PI = 3.141592741
    // PI2 = 3.141592654

    // Constants -
    const int n = 25; // must be initialized while defining
    const float py = 3.14;

    cout << "n is - " << n << endl;
    cout << "py is - " << py << endl;

    cout << "g - \n"
         << g; // g - 9.8

    // Typecasting order when different datatypes -
    // bool -> char -> int -> float -> double

    // Opertors -
    // ternary Op - simply single line code instead of if else
    bool isadult; // 1,0
    int age;
    cout << "What is the age " << endl;
    // cin >> age;

    isadult = age >= 18 ? true : false;
    cout << isadult << endl; // 1

    // largets of 2 mnumbers =-
    int a = 5;
    int b = 10;
    int largest = a >= b ? a : b;
    cout << largest << endl; // 10

    // Loops in cpp -
    // basoc square star pattern -
    for (int i = 1; i <= 4; i++)
    {
        cout << "****" << endl;
    }

    /*
    ****
    ****
    ****
    ****
    */
    for (int i = 5; i > 0; i--)
    {
        cout << i << " \n";
    }
// ____________ ____________ ____________ ____________ ____________

    //2)  digit sum -
    // int m;
    // cout << "Enter number value - " << endl;
    // cin >> m;

    // int sumdigit=0;

    // while (m > 0)
    // {
    //     int lastdigit = m % 10;
    //     sumdigit += lastdigit;
    //     m /= 10;
    // }
    // cout<<"So, the digit sum is - "<<sumdigit<<endl;

    // Odd digit sum -
    // int m;
    // cout << "Enter number value - " << endl;
    // cin >> m;

    // int sumdigit = 0;

    // while (m > 0)
    // {
    //     int lastdigit = m % 10;
    //     if (lastdigit % 2 != 0)
    //     {
    //         sumdigit += lastdigit;
    //     }

    //     m /= 10;
    // }
    // cout << "So, the digit sum is - " << sumdigit << endl;
// ____________ ____________ ____________ ____________ ____________

    //3) Reverse Number -
    // int m;
    // cout << "M's value - " << endl;
    // cin >> m;
    // int revesenumber;

    // while (m > 0)
    // {
    //     revesenumber = m % 10;
    //     cout<<revesenumber<<" ";
    //     m /= 10;
    // }
// ____________ ____________ ____________ ____________ ____________

    // Breaak Statem,ent -

    // do- while loop basic syntax -
    // int val = 1;
    // do
    // {
    //     cout << "Learning do-while loop here " << endl;
    // } while (val > 5);
    // // Learning do-while loop here

    // while (val > 5)
    // {
    //     cout << "Learning using while loop here" << endl;
    // }
    // // Break statement in looping -
    // int i = 1;
    // while (i <= 10)
    // {
    //     if (i == 3)
    //     {
    //         break;
    //     }

    //     cout << i << endl;
    //     i++;
    // }
    /*
    1
    2
    */

    // int n;
    // do {
    //     cout << "Enter Number - ";
    //     cin >> n;
    //     if (n % 10 == 0) {
    //         break;
    //     }
    //     cout << "You entered here - " << n << endl;
    // } while (true);

    // return 0;
// ____________ ____________ ____________ ____________ ____________


    // Continue statement -
    // for (int i = 1; i <= 10; i++)
    // {
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    // /*
    // 1
    // 2
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10
    // */
// ____________ ____________ ____________ ____________ ____________


    //4) Prime no. -
    // int num;
    // cout << "Enter the no. you wants to check for Prime or Not" << endl;
    // cin >> num;

    // if (num == 1)
    // {
    //     cout << "No. is Neither Prime Nor Compite" << endl;
    // }

    // for (int i = 2; i <= sqrt(num); i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << "Not a Prime Number" << endl;
    //         return 0;
    //     }
    // }
    // cout << "prime number" << endl;
// ____________ ____________ ____________ ____________ ____________




}

