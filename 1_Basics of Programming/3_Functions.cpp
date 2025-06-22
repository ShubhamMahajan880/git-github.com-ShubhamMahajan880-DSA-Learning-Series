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
// Funcitons in Cpp -

// void sayHello() // Function Declaration
// {               // inside the function its Funciton Definition - How is the function defined to do work
//     cout << "Hello, Shubham you'll be get placed in Microsoft in August 2025" << endl;
//     cout << "All the very best." << endl;
// }
// void assistance()
// {
//     sayHello();
//     cout << "Work done boss" << endl;
// }

// int sum(int a, int b){ // a & b are Parameters here.
//     int sum = a + b;
//     return sum;
// }

// int mul(int a, int b){
//     int mul = a*b;
//     return mul;
// }
// int sub(int a, int b=1){ //passing a value in 2nd parameter as by default 1, if argumeent didn't pass in function then system  will take this 1 as 2nd arguement
//     int sub = a-b;
// }
// int main()
// {
//     sayHello();
//     sayHello(); // Function Calling
//     sayHello();

//     assistance();
//     /*
//     Hello, Shubham you'll be get placed in Microsoft in August 2025
//     All the very best.
//     Hello, Shubham you'll be get placed in Microsoft in August 2025
//     All the very best.
//     Hello, Shubham you'll be get placed in Microsoft in August 2025
//     All the very best.
//     Hello, Shubham you'll be get placed in Microsoft in August 2025
//     All the very best.
//     Work done boss
//      */

//     //  Forwaard Declaration - When a function os declared before main function and defininf after the mauin fucntion. It's fdorward Declaration. Pehele hi declare kr diya and ab define kr rheh
//     cout<<sum(2,4)<<endl; // 2,4 are arguements which are need to be pass in the parameters
//     cout<<mul(2,4)<<endl;// 8
//     cout<<sub(2)<<endl;//1 - when no 2nd argumenet passed but 2nd parameter defined then by default defined 2nd parameter 1 will becoming the 2nd arguement here.
//     cout<<sub(5,2)<<endl;//3 - here when, on passing both the argumenets, system will not consider the byu defaukt defined the 2nd parameter = 1 or any value

//     return 0;
// }

// ____________ ____________ ____________ ____________ ____________

// int Prod(int a, int b = 2)
// {
//     int theMultiplicaiton = a * b;
//     return theMultiplicaiton;
// }

// bool isprime(int n)
// {
//     if (n == 1)
//     {
//         cout << "Hey, it's exceptional dude neither prime nor composite buddy" << endl;
//     }

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % 2 == 0)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }
//     return isprime;
// }

// int factorial(int c)
// {
//     int fact = 1;
//     for (int i = 1; i <= c; i++)
//     {
//         fact *= i;
//     }
//     cout << "Factorial of no. - " << c << " is - " << fact << endl;
//     return fact;
// }

// int BinomialCoefficient(int n, int r)
//     {
//        int val1 = factorial(n);
//        int val2 = factorial(r);
//        int val3 = factorial(n-r);

//        int result = val1 / (val2 * val3);
//        cout<<"BinomialCoeffiecent result is - "<<result<<endl;

//     }

// int main()
// {
//     cout << Prod(5) << endl;      // 10 - by using default defined parametr 2 with 1 argumenet
//     cout << Prod(5, 10) << endl;  // 50 - by using both  parameters with both arguements
//     cout << isprime(23) << endl;  // 1
//     cout << isprime(2) << endl;   // 1 - Prime Numbe
//     cout << isprime(8) << endl;   // 0 - Not a prime number
//     isprime(1);                   // Hey, it's exceptional dude neither prime nor composite buddy
//     cout << factorial(5) << endl; // 120
//     factorial(10);                // Factorial of no. - 10 is - 3628800
//     BinomialCoefficient(4,2);
// }

// ____________ ____________ ____________ ____________ ____________

// // Scoping in Funciton -

// /*
// Locally Defined- If we define a variable only in the declaring funciton and want to use in the main funciton then - Not Pssible as inly locally declard
// Locally Defined- If we define the variable in any loop or in any if else statement then, outside of that we can't access the varfiable as defined withi that local scope.
// Globally Defined- So, for avoiding such issues, we can define particular variable at the top just after the header files. Above the declaratory function as weell as main function

//  */
// int num = 25;
// int sum(int a, int b)
// {
//     int addition = a + b;
//     cout << addition << endl;
//     cout << "No. which is declared globally is - " << num << endl;
// }
// int main()
// {
//     sum(15, 10);
//     cout << "No. which is declared globally is - " << num << endl;

// /*
// 25
// No. which is declared globally is - 25
// No. which is declared globally is - 25
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// Funciton Overloading -

// int sum(int a, int b)
// {
//     cout<<(a+b)<<endl;
//     return a+b;
// }

// int sum(double a, double b)
// {
//     cout<<(a+b)<<endl;
//     return a+b;
// }

// int sum(int a, int b, int c)
// {
//     cout<<(a+b+c)<<endl;
//     return a+b+c;
// }
// int main()
// {
//     sum(45,5);//50
//     sum(12.5,2.5);//14 -
//     // it is 15 actually but due to considering as a double value compiler giving 14, so for overcoming trhis issueds we can use the same funciton with doffernt data gtype - it's called as fduncitn  ovberloading
//     sum(12.5,2.5);//15 - compiler won't confuse here ki kisme value pass kare, vo datatype ke according kr lega, its overloading

//     // AND THE SAME GOES FOR multiple paramters wuith same funciton name
//     sum(5,4,3);//12

// }
// ____________ ____________ ____________ ____________ ____________

// QUn - Print all prime numbers from 2 to range n

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         cout << "No prime nor Composite" << endl;
//     }

//     for (int i = 2; i*i <=n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }

//     }
//     return true;
// }
// void AllPrimes(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << "  is prime number" << endl;
//         }
//     }
//     cout<<endl;
// }
// int main()
// {
//     AllPrimes(13);
//     return 0;
// /*
// 2  is prime number
// 3  is prime number
// 5  is prime number
// 7  is prime number
// 11  is prime number
// 13  is prime number
//  */
// }
// ____________ ____________ ____________ ____________ ____________

// Pointers in cpp -

// int main()
// {

//     int c = 10;
//     int *ptr = &c;                     // int ptr tyep can never store the value, it always stores the address itself
//     cout << &c << "==" << ptr << endl; // 0x61fed4==0x61fed4

//     cout << sizeof(ptr) << endl;//4 - size of int pointer

//     float p = 3.1416;
//     float *ptr2 = &p;
//     cout << &p << "==" << ptr2 << endl;//0x61ff00==0x61ff00
//     cout << sizeof(ptr2) << endl;//4 - size of float pointer

//     // Pointer of Pointer Approach -
//     int **pptr = &ptr;
//     cout<<&ptr<<"=="<<pptr<<endl;//0x61ff00==0x61ff00

//     // Dereference Operator -
//     int a = 20;
//     int *ptr3 = &a;
//     cout<<&a<<endl;//0x61fef8
//     cout<<*(&a)<<endl;//20
//     cout<<*ptr3<<endl;//20

//     // Null Pointer
//     // if pointer is not pointing the address of any variable then this will give Garbage Value

//     int *ptr4;
//     cout<<ptr4<<"\n";//0x76e18c1d - Automatically gives Garbage Value

//     int *ptr5=NULL;
//     cout<<ptr5<<endl;//0x74e18c1d
//     cout<<*ptr5<<endl;//0
// }
// ____________ ____________ ____________ ____________ ____________

// Passing Arguements in funciton -
// Pass by value - when parameter is a copy of actual arguement variable in memory

// void changeA(int a)
// {
//     a=30;
//     cout<<a<<endl;
// }

// int main()
// {

//     int a = 10;
//     changeA(a);//30 - Funciton call kiya he to function declaratin me jaa kr function me variable ki assigned value ko call krega
//     cout<<a<<endl;//10 - vapas se main fun me aa gya h to iss scope me jo variable defined h usko value ko print krega
// }

// Pass by Reference - using pointer

// void changeB(int *ptr)
// {
//     *ptr = 20;
//     cout << *ptr << endl;
// }
// int main()
// {
//     int a = 10;
//     changeB(&a);//20 - call by address he. Ptr me &a h and function declaration me us pointer se uski valuie assign hui he. to calling me funciton ki under variable ki assigned value print hogi

//     cout << a << endl;//20  - return to main function - to uske ander var ki jo value defined he voprint hogi
// }

// Pass by Reference - using Reference Variables 
// void changeC(int *ptr)
// {
//     *ptr = 20;
//     cout<<*ptr<<endl;
// }

// void changeD(int &c)
// {
//     c=20;
//     cout<<c<<endl;
// }
// int main()
// {
//     int a = 10;
//     int &b = a;
//     b=25;
//     cout<<b<<endl;//25
//     cout<<a<<endl;//25

//     int c =10;
//     changeD(c);//20
//     cout<<c<<endl;//20 - yaha pr pointer ke saath reference diya h fiun declaration me to main value me bhi change aayag
//     // This is call by reference using reference variable. memory will back to main function but as we're used reference var, so there will also change in main fun too.
// }

// Qun - 

// int main()
// {
//     int x=5, y=10;
//     int *ptr1 = &x, *ptr2 = &y;
//     ptr2=ptr1;

//     cout<<ptr2<<endl;//0x61ff04
//     cout<<ptr1<<endl;//0x61ff04
//     cout<<&x<<endl;//0x61ff04   

//     // What os the typr of the following variables - 
//     float*a,b;
//     // a - float pointer, b - normal float variable
     
// }
