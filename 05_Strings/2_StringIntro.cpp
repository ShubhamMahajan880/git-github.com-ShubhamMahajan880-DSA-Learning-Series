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

// 6)String Intro & Basic I/p, o/p operations -

// int main()
// {
// string str = "SayShank";
// cout << str << endl;

// str = "Pune";
// cout << str << endl;
// cout<<str[0]<<endl;
// cout<<str[1]<<endl;
// cout<<str[2]<<endl;
// cout<<str[3]<<endl;

// /*
// SayShank
// Pune
// P
// u
// n
// e
//  */

// string s;
// getline(cin, s);
// cout << s << endl; // Microsft Hyderad at Sayshak's Flat

// // If i want to stop at a place, so use any special character in the string to stop it

// string s1;
// getline(cin, s1, '$');
// cout << s1 << endl; // Microsft Hyderad at Sayshak's
// // -------------------------
// // String printing using loops -

// string str = "Microsoft Hyderabad";

// for (int i = 0; i < str.size(); i++)
// {
//     cout << str[i] << " ";//M i c r o s o f t   H y d e r a b a d

// }
// cout<<endl;
// // with this dot operator instead of size we could also use length function
// string str1 = "Microsft's new office";
// for (int i = 0; i < str1.size(); i++)
// {
//     cout<<str1[i]<<" ";//M i c r o s f t ' s   n e w   o f f i c e
// }
// cout<<endl;
// // using for each loop concept -
// string str2;
// cout<<"what's in your mind baby - "<<endl;
// getline(cin,str2);//I got placed with the package of 51 LPA
// for(auto ch: str2)
// {
//     cout<<ch<<",";//I, ,g,o,t, ,p,l,a,c,e,d, ,w,i,t,h, ,t,h,e, ,p,a,c,k,a,g,e, ,o,f, ,5,1, ,L,P,A,
// }
// cout<<endl;
// // -------------------------
// ____________ ____________ ____________ ____________ ____________
//6.1) String Memeber Functions-
// int main()
// {

//     string str = "Microsoft Hyderabad";

//     cout << str.length() << endl;      // 19
//     cout << str[3] << endl;            // r
//     cout << str.at(3) << endl;         // r
//     cout << str.substr(5, 17) << endl; // soft Hyderabad

//     string str2;
//     cout << "what's in your mind baby - " << endl;
//     getline(cin, str2);                     // Microsoft's new office in Pune
//     cout << str2.find("Pune") << endl;      // 26
//     cout << str2.find("GIFT CITY") << endl; // 18446744083781055516154 - which is a Garbage value and eq. to -1. FInd fun returns a unsigned value which is this.
//     // want to see this as -1
//     int idx = str2.find("GIFT CITY");
//     cout << idx << endl; //-1

//     // Simialrlty for more than one occurence. Just start indexing before that occurence to count that

//     string str3;
//     cout << "what's in your mind baby - " << endl;
//     getline(cin, str3);
//     cout << str3.find("office") << endl;     // 26
//     cout << str3.find("office", 30) << endl; // 53
//     cout << str3.find("office", 54) << endl; // 96

//     // String Operations - 
//     string t1 = "cat";
//     string t2 = "dog";

//     string t1 = "cat";
//     string t2 = "dog";
//     cout << (t1 != t2) << endl;//1
//     cout << (t1 > t2) << endl;//0
//     cout << (t1 < t2) << endl;//1
// }
// ____________ ____________ ____________ ____________ ____________

//7) Check the two strings are Anagram or not -

// bool isAnagram(string str1, string str2)
// {
//     if (str1.size() != str2.size())
//     {
//         cout << "not valid ANagrams" << endl;
//         return false;
//     }

//     int count[26] = {0}; // setting all character's count 0 initially
//     for (int i = 0; i < str1.length(); i++)
//     {
//         count[str1[i] - 'a']++;
//     }
//     for (int i = 0; i < str2.length(); i++)
//     {

//         if (count[str2[i] - 'a'] == 0)
//         {
//             cout << "It's not a valid ANagam" << endl;
//             return false;
//         }
//         count[str2[i] - 'a']--;
//     }
//     cout << "Valid ANagrams" << endl;
//     return true;
// }
// int main()
// {
//     string str1, str2;
//     cout << "value of string 1 - " << endl;
//     getline(cin, str1);

//     cout << "Similarly, value of string 2 is - " << endl;
//     getline(cin, str2);

//     isAnagram(str1, str2);
//     /*
//     value of string 1 -
//     anagram
//     Similarly, value of string 2 is -
//     nagaram
//     Valid ANagrams

//     value of string 1 -
//     abcdef
//     Similarly, value of string 2 is -
//     dabfec
//     Valid ANagrams

// value of string 1 -
// shruti
// Similarly, value of string 2 is -
// rutish
// Valid ANagrams

// value of string 1 -
// madhuri
// Similarly, value of string 2 is -
// ridhum
// not valid ANagrams
//     T.C - O(n+m) or any of them which dominates as per the length of string 1 or 2
//     */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
