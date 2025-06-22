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
int main()
{
    //5) Nested Loops  & Patterns -

    // /*
    // 1) Print the Nested Loop Pattern -
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    //  */

    // int n;
    // cout << "n's value " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // /* O/p -

    // n's value
    // 6
    // 1 1 1 1 1 1
    // 2 2 2 2 2 2
    // 3 3 3 3 3 3
    // 4 4 4 4 4 4
    // 5 5 5 5 5 5
    // 6 6 6 6 6 6
    //  */
    // ____________ ____________

    // /*  2) Print the Star Pattern
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    //  */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // /*
    // 5
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    //  */

    // ____________ ____________

    // /*  3) Print the Inverted Star Pattern
    //  * * * * *
    //  * * * *
    //  * * *
    //  * *
    //  *
    //  */
    // int n;
    // cout << "vakue of n - " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // /*
    // vakue of n -
    // 5
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    //  */
    // ____________ ____________

    //  /*  4) Print the half Pyramid  Pattern
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    //      */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << j << " ";
    //         }
    //         cout << endl;
    //     }
    // /*
    // vakue of n -
    // 5
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    //  */

    // ____________ ____________

    // /*
    // 4.1) Print the  Pattern
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    // */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << i << " ";
    //         }
    //         cout << endl;
    //     }
    // /*
    // vakue of n -
    // 5
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    //  */

    // ____________ ____________

    // /*
    //     5) Print the Character Pyramid Pattern
    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    //     */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;
    //     char ch = 'A';

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch << " ";
    //             ch++;
    //         }
    //         cout << endl;
    //     }
    //     /*
    //     vakue of n -
    //     5
    //     A
    //     B C
    //     D E F
    //     G H I J
    //     K L M N O
    //      */
    // ____________ ____________

    // /*
    // 5.1) Print the Character Pyramid Pattern for same Char in the line
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    //     */
    // int n;
    // cout << "vakue of n - " << endl;
    // cin >> n;
    // char ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }
    // /*
    // vakue of n -
    // 5
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    //  */

    // ____________ ____________

    /*
    6) Print the Hollow Rectabgle Patternn
* * * * *
*       *
*       *
*       *
* * * * *
     */

    // int n;
    // cout << "vakue of n - " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<"*";//First Row
    //     for (int j = 1; j <= n - 1; j++)//sapce printing
    //     {
    //         if (i == 1 || i == n)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout<<"*"<<endl;//Last Row
    // }

    // Lgic 2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == 1 || i == n || j == 1 || j == n)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout<<"  ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
    vakue of n -
    5
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
     */

    // ____________ ____________

    // /*
    // 7) Print Inverted & Rotated Half Pyramid
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    // */
    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         // Printoing SPce
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Printing Str
    //         for (int k = 1; k <= i; k++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // /*
    // vakue of n -
    // 5
    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    //  */

    // ____________ ____________

    // /*
    // 8) Print Floyd's Triangle
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // */
    // int n;
    // cout << "vakue of n - " << endl;
    // cin >> n;
    // int num = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // /*
    // vakue of n -
    // 5
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    //  */

    // ____________ ____________

    //     /*
    //     9) Print the Diamond Pattern
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *
    //     */

    //     int n;
    //     cout << "vakue of n - " << endl;
    //     cin >> n;

    //     // 1st Pyramid
    //     for (int i = 1; i <= n; i++)
    //     {
    //         // Printing SPace
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             cout << "  ";
    //         }

    //         // Printing Star
    //         for (int k = 1; k <= 2 * i - 1; k++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     // 2nd Pyramid
    //     for (int i = n; i >= 1; i--)
    //     {
    //         // Printing SPace
    //         for (int k = 1; k <= n - i; k++)
    //         {
    //             cout << "  ";
    //         }
    //         // Printing Star
    //         for (int j = 1; j <= 2 * i - 1; j++)
    //         {
    //             cout << "* ";
    //         }

    //         cout << endl;
    //     }
    // /*
    // vakue of n -
    // 5
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
    //         *
    //  */

    // ____________ ____________

    /*
    10) Print the Butterfly Pattern
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*/

    int n;
    cout << "vakue of n - " << endl;
    cin >> n;

    // 1st Butterfly
    // Printing Star
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Printing SPace
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }

        // Prinmting Start for last
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // 2nd Half Butterfly
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Printing SPace
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }

        // Prinmting Start for last
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    /*
    vakue of n -
    5
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
     */
    // ____________ ____________ ____________ ____________ ____________
}