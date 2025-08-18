#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cstring>
// #include<cctype>
// #include<vector>
// #include<set>
// #include<iomanip>
// #include<cmath>
using namespace std;
// 1) Intro to Char Array -

// int main()
// {
//     char ch = 'F';
//     int pos = ch - 'A';
//     cout << pos << endl; // 5

//     char arr[5] = {'a', 'b', 'c', 'd', 'e'};
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;
//     cout << arr[4] << endl;
//     cout << arr[5] << endl;

//     char arr2[8] = {'s', 'h', 'u', 'b', 'h', 'a', 'm'};
//     cout << arr2 << endl; // shubham - in int array on printing array, it gives address of array in hexadecimal form, but in char array it directly gives the value

//     // at the end - /0 indicates that these are not letters only this is a valid string word.
//     char arr3[] = {'m', 'a', 'h', 'a', 'j', 'a', 'n', '\0'};
//     cout << arr3 << endl; // mahajan

//     "Microsoft"; // it's a string liiteral -literal means constant. which is a fix value
//     // String creation methods -
//     char arru[] = {'M', 'i', 'c', 'r', 'o', 's', 'o', 'f', 't', '\0'};
//     char arru2[12] = {'H', 'y', 'd', 'e', 'r', 'a', 'b', 'a', 'd'};
//     char work[] = "SoftwareDeveloper";
//     char office[] = "New Building";

//     cout << arru << endl;           // Microsoft
//     cout << work << endl;           // SoftwareDeveloper
//     cout << arru2 << endl;          // Hyderabad
//     cout << office << endl;         // NewBuilding
//     cout << strlen(work) << endl;   // 17
//     cout << strlen(office) << endl; // 12

//     // taking input on string  -
//     /* char shabd[15];
//     cin >> shabd;
//     cout<<"So, you typed - "<<shabd<<"and the length is - "<<strlen(shabd)<<endl; */

//     /*
//     Pune
//     So, you typed - Puneand the length is - 4
//      */

//     // for the input of full statement
//     /* char carrier[50];
//     cin.getline(carrier, 50);
//     cout << "So, your entered string is - " << carrier << endl; // in Microsoft with the package of 51 LPA  */

//     // If i want to stop meanwhile the sentence
//     char carrier2[50];
//     cin.getline(carrier2, 50, '*');
//     cout << "Entered String is - " << carrier2 << endl;
//     /*
//     Only in Microsoft with *  the package of 51 LPA
//     Entered String is - Only in Microsoft with
//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Covert to Upper Letter -

// void toUpper(char word[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = word[i];
//         if (ch >= 'A' && ch <= 'Z') // if its already in Uppper Case
//         {
//             continue;
//         }
//         else
//         {
//             word[i] = ch - 'a' + 'A';
//         }
//     }
// }
// int main()
// {
//     cout << "What's in your mind - " << endl;
//     char word[50];
//     cin.getline(word, 50);

//     toUpper(word, strlen(word));
//     cout << word << endl;
//     /*
//     What's in your mind -
//     MicrosftHyderabad
//     MICROSFTHYDERABAD

//      */
// }
// ____________ ____________ ____________ ____________ ____________

// 2.1) Covert to Lowercase Letetr -

// void toUpper(char word[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = word[i];
//         if (ch >= 'a' && ch <= 'z') // if its already in Lower Case
//         {
//             continue;
//         }
//         else
//         {
//             word[i] = ch - 'A' + 'a';
//         }
//     }
// }
// int main()
// {
//     cout << "What's in your mind - " << endl;
//     char word[50];
//     cin.getline(word, 50);

//     toUpper(word, strlen(word));
//     cout << word << endl;
//     /*
//     What's in your mind -
//     MicrosftHyderabad
//     microsfthyderabad

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//3) Reverse a Char Array -
// void ReverseCharArray(char word[], int n)
// {
//     int st = 0, end = n - 1;
//     while (st < end)
//     {
//         swap(word[st], word[end]);
//         st++;
//         end--;
//     }
//     cout << "Hence, the reversed word is - " << word << endl;
// }

// int main()
// {
//     cout << "What's in your mind - " << endl;
//     char word[50];
//     cin.getline(word, 50);

//     ReverseCharArray(word, strlen(word));
// /*
// What's in your mind -
// MicrosoftHyderabad
// Hence, the reversed word is - dabaredyHtfosorciM

//  */
// }
// ____________ ____________ ____________ ____________ ____________

//4) Valid Palindrome in char array -

// bool PalindromeWord(char word[], int n)
// {
//     int st = 0, end = n - 1;
//     while (st < end)
//     {
//         if (word[st] != word[end])
//         {
//             cout << "Not valid Palindrome " << endl;
//             return false;
//         }
//         st++;
//         end--;
//     }
//     cout << "Valid Palindromed  " << endl;
//     return true;
// }
// int main()
// {
//     cout << "What's in your mind - " << endl;
//     char word[100];
//     cin.getline(word, 100);
//     PalindromeWord(word, strlen(word));
//     /*

//     What's in your mind -
//     NaMaN
//     Valid Palindromed

//     What's in your mind -
//     naman
//     Valid Palindromed

//     What's in your mind -
//     Naman
//     Not valid Palindrome

//     What's in your mind -
//     racecar
//     Valid Palindromed

//      */
// }
// ____________ ____________ ____________ ____________ ____________

//5) Char Array(String) Functions -

// int main()
// {
//     char word1[100];
//     // str1 = "Shubham Mahajan"; - as it's showing the error in assigning value, so for allowing it we can use cstring functions - that is strcpy
//     char word2[100] = "Microsoft Hyderabad";
//     strcpy(word1, "Free Offcie tour");
//     cout << word1 << endl; // Free Offcie tour

//     // For String Concatenation -
//     char word3[100] = "Let's come inside";
//     strcat(word2, word3);
//     cout << word2 << endl; // Microsoft HyderabadLet's come inside

//     // For String Comparision -
//     char word4[] = "Microsoft Hyderabad";
//     cout << strcmp(word2, word4) << endl; // 1

//     char word5[100] = "abc";
//     char word6[100] = "xyz";
//     cout<<strcmp(word5,word6)<<endl;//-1 - if the baad waali string is big, then returns negtive value

//     char word7[100] = "xyz";
//     char word8[100] = "abc";
//     cout<<strcmp(word7,word8)<<endl;//1 - if the phle waali string is big, then returns possitive value
// }
// ____________ ____________ ____________ ____________ ____________

