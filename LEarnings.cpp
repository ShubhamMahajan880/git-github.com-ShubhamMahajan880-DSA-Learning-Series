#include <bits/stdc++.h>
using namespace std;

// 8) Friend Class & Friend Function - A friend who has over ovt info can be reveal outside
//  class A
//  {
//      string secret = "Personal Data";
//  };
//  class B
//  {
//      public:
//      void showSecret(A &obj)
//      {
//          // cout<<obj.secret<<endl;

//     }
//     // error: 'std::__cxx11::string A::secret' is private within this context
//     // this is invalid and showing error, not accesible to priovate class's data
//     // So, for avoiding this we can do ki B class ko class A ka friend bna diya
// // };

// int main()
// {
//     A a1;
//     B b1;

//     b1.showSecret(a1);
// }
// -------------------

// class A
// {
//     string secret = "Personal Data";
//     friend class B;// cslss b has been become friend for class A
// };
// class B
// {
// public:
//     void showSecret(A &obj)
//     {
//         cout << obj.secret << endl;//Personal Data

//     }
// };

// int main()
// {
//     A a1;
//     B b1;

//     b1.showSecret(a1);
// }
// ____________ ____________ ____________ ____________ ____________

// Practice Q'S -
/*
Predict the Output

class A {
public:
    A() { std: : cout << "Constructor A" << std: :endl; }
    ~A() { std :: cout << "Destructor A" << std :: endl; }

};

class B : public A {
public:
    B() { std: : cout << "Constructor B" << std: :endl; }
    ~B() { std :: cout << "Destructor B" << std: :endl; }

};

int main() {
B obj;
return 0;

}
 */
// class Parent
// {
// public:
//     Parent()
//     {
//         cout << "Constructor Parent Class " << endl;
//     }

//     ~Parent()
//     {
//         cout << "Dectructor Parent Class " << endl;
//     }
// };
// class Child : public Parent
// {
// public:
//     Child()
//     {
//         cout << "Constructor Child CLass " << endl;
//     }
//     ~Child()
//     {
//         cout << "Dectructor Child CLass " << endl;
//     }
// };
// int main()
// {
//     Child ch1; // Object of child class, first call always go to Parent Class Contructor then it calls to Child Class COnstructor
//     /* O/p -
//     Constructor Parent Class
//     Constructor Child CLass
//      */
//     /* O/p - // In case if Desctructor, first call always go to Child Class Destructor then it calls to Parent Class Constructor
//     Dectructor Child CLass
//     Dectructor Parent Class
//      */

//     /*
//     📒 - So order for constructor & disctructor calling for parent & Child Classes
//     i) Constructor of Parent Class
//     ii) Constructor of Child Class
//     iii) Dewstructor of Parent Class
//     iv) Dewstructor of Child Class
//      */
// }
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________
