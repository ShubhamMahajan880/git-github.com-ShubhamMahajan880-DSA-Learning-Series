#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int numberReverse = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        numberReverse = numberReverse * 10 + lastDigit;
        n /= 10;
    }

    return numberReverse;
}

bool palindromeNumber(int n)
{
    return reverseNumber(n) == n;
}

int main()
{
    int m;
    cout << "Enter m - " << endl;
    cin >> m;

    cout << "So, the reverse number is - " << endl;
    cout << reverseNumber(m) << endl;
    if (palindromeNumber(m))
    {
        cout << "It's Palindrome nUMBER" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}