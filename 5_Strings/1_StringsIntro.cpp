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
// 1) Intro to Strings -
int main()
{
    char ch = 'F';
    int pos = ch - 'A';
    cout << pos << endl; // 5

    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;

    char arr2[8] = {'s', 'h', 'u', 'b', 'h', 'a', 'm'};
    cout << arr2 << endl; // shubham - in int array on printing array, it gives address of array in hexadecimal form, but in char array it directly gives the value

    // at the end - /0 indicates that these are not letters only this is a valid string word.
    char arr3[] = {'m', 'a', 'h', 'a', 'j', 'a', 'n', '\0'};
    cout << arr3 << endl; // mahajan

    "Microsoft"; // it's a string liiteral -literal means constant. which is a fix value
    // String creation methods -
    char arru[] = {'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', '\0'};
    char arru2[12] = {'H', 'y', 'd', 'e', 'r', 'a', 'b', 'a', 'd'};
    char work[] = "SoftwareDeveloper";
    char office[] = "New Building";

    cout << arru << endl;           // Microsoft
    cout << work << endl;           // SoftwareDeveloper
    cout << arru2 << endl;          // Hyderabad
    cout << office << endl;         // NewBuilding
    cout << strlen(work) << endl;   // 17
    cout << strlen(office) << endl; // 12


    // taking input on string  -
    /* char shabd[15];
    cin >> shabd;
    cout<<"So, you typed - "<<shabd<<"and the length is - "<<strlen(shabd)<<endl; */
    
    /*
    Pune
    So, you typed - Puneand the length is - 4
     */


    // for the input of full statement
    /* char carrier[50];
    cin.getline(carrier, 50);
    cout << "So, your entered string is - " << carrier << endl; // in Microsoft with the package of 51 LPA  */

    // If i want to stop meanwhile the sentence
    char carrier2[50];
    cin.getline(carrier2, 50, '*');
    cout<<"Entered String is - "<<carrier2<<endl;
    /* 
    Only in Microsoft with *  the package of 51 LPA
    Entered String is - Only in Microsoft with 
     */
    
}
