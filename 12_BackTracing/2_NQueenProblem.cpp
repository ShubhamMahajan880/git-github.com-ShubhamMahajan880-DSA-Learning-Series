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

//4) N_Quee problem -

// initially N-Rows ke liye N-Queens ko kese bithaye without attack conditionn - saari possible choices queens kebethen k liye
// void printBoard(vector<vector<char>> board)
// {
//     int n = board.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "____________________________________" << endl;
// }

// void nQueens(vector<vector<char>> board, int row)
// {
//     int n = board.size();
//     if (row == n)
//     {
//         printBoard(board);
//         return;
//     }

//     for (int j = 0; j < n; j++) // columns
//     {

//         board[row][j] = 'Q';
//         nQueens(board, row + 1);
//         board[row][j] = '.';
//     }
// }
// int main()
// {
//     vector<vector<char>> board;
//     int n = 2;

//     for (int i = 0; i < n; i++)
//     {
//         vector<char> newRow;
//         for (int j = 0; j < n; j++)
//         {
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }
//     nQueens(board, 0);
//     return 0;
//     /*
//     Q .
//     Q .
//     ____________________________________
//     Q .
//     . Q
//     ____________________________________
//     . Q
//     Q .
//     ____________________________________
//     . Q
//     . Q
//     ____________________________________
// Till here we were assuming that queens are not attacking to each other
//      */
// }

// -------------------Now going to execute for the entire qun -

// void printBoard(vector<vector<char>> board)
// {
//     int n = board.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "____________________________________" << endl;
// }

// bool isSafe(vector<vector<char>> board, int row, int col)
// {
//     int n = board.size();
//     // Horizontal
//     for (int j = 0; j < n; j++)
//     {
//         if (board[row][j] == 'Q')
//         {
//             return false;
//         }
//     }

//     // Vertical Safety
//     for (int i = 0; i < row; i++)
//     {
//         if (board[i][col] == 'Q')
//         {
//             return false;
//         }
//     }

//     // Diagonally Safety - Left
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     // Diagonally Safety - Right
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//     }

//     return true;
// }
// void nQueens(vector<vector<char>> board, int row)
// {
//     int n = board.size();
//     if (row == n)
//     {
//         printBoard(board);
//         return;
//     }

//     for (int j = 0; j < n; j++) // columns
//     {
//         if (isSafe(board, row, j)) // checking is it worth to allow Q to sit here
//         {

//             board[row][j] = 'Q';
//             nQueens(board, row + 1);
//             board[row][j] = '.';
//         }
//     }
// }
// int main()
// {
//     vector<vector<char>> board;
//     int n = 6;

//     for (int i = 0; i < n; i++)
//     {
//         vector<char> newRow;
//         for (int j = 0; j < n; j++)
//         {
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }
//     nQueens(board, 0);
//     return 0;
/*
For n = 2 - Not possible, so giving empty space
For n = 4
. Q . .
. . . Q
Q . . .
. . Q .
____________________________________
. . Q .
Q . . .
. . . Q
. Q . .
____________________________________

Fo n= 6
. Q . . . .
. . . Q . .
. . . . . Q
Q . . . . .
. . Q . . .
. . . . Q .
____________________________________
. . Q . . .
. . . . . Q
. Q . . . .
. . . . Q .
Q . . . . .
. . . Q . .
____________________________________
. . . Q . .
Q . . . . .
. . . . Q .
. Q . . . .
. . . . . Q
. . Q . . .
____________________________________
. . . . Q .
. . Q . . .
Q . . . . .
. . . . . Q
. . . Q . .
. Q . . . .
____________________________________

TC - n*(n-1)*(n-2)*(n-3)...1 = O(n)
SC - O(n*n)
*/
// }

// -------------------N-Queens- Count of All Solutions -

void printBoard(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << "____________________________________" << endl;
}

bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // Horizontal
    for (int j = 0; j < n; j++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }

    // Vertical Safety
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // Diagonally Safety - Left
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // Diagonally Safety - Right
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}
int nQueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    {
        printBoard(board);
        return 1;
    }

    int count = 0;
    for (int j = 0; j < n; j++) // columns
    {
        if (isSafe(board, row, j)) // checking is it worth to allow Q to sit here
        {

            board[row][j] = 'Q';
            count += nQueens(board, row + 1);
            board[row][j] = '.';
        }
    }
    return count; // no. of possible solutions at each level
}
int main()
{
    vector<vector<char>> board;
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    int count = nQueens(board, 0);
    cout << "count is - " << count << endl;
    return 0;
    /*
    . Q . .
    . . . Q
    Q . . .
    . . Q .
    ____________________________________
    . . Q .
    Q . . .
    . . . Q
    . Q . .
    ____________________________________
    count is - 2

    Q . . . .
    . . Q . .
    . . . . Q
    . Q . . .
    . . . Q .
    ____________________________________
    Q . . . .
    . . . Q .
    . Q . . .
    . . . . Q
    . . Q . .
    ____________________________________
    . Q . . .
    . . . Q .
    Q . . . .
    . . Q . .
    . . . . Q
    ____________________________________
    . Q . . .
    . . . . Q
    . . Q . .
    Q . . . .
    . . . Q .
    ____________________________________
    . . Q . .
    Q . . . .
    . . . Q .
    . Q . . .
    . . . . Q
    ____________________________________
    . . Q . .
    . . . . Q
    . Q . . .
    . . . Q .
    Q . . . .
    ____________________________________
    . . . Q .
    Q . . . .
    . . Q . .
    . . . . Q
    . Q . . .
    ____________________________________
    . . . Q .
    . Q . . .
    . . . . Q
    . . Q . .
    Q . . . .
    ____________________________________
    . . . . Q
    . Q . . .
    . . . Q .
    Q . . . .
    . . Q . .
    ____________________________________
    . . . . Q
    . . Q . .
    Q . . . .
    . . . Q .
    . Q . . .
    ____________________________________
    count is - 10

     */
}

// -------------------N-Queens- Print ANy One Solution 
// ____________ ____________ ____________ ____________ ____________

//Knight Problem  - 
