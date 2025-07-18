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

bool isprime(int n)
{
    if (n == 1)
    {
        cout << "Neiother prime nor composite number" << endl;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "is not a prime number" << endl;
            return 0;
        }
    }
    cout << "is a prime number" << endl;
}

int main()
{
    int n;
    cout << "n's value - " << endl;
    cin >> n;

    isprime(n);
}
