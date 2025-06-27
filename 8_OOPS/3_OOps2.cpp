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

// 5) Polymorphism -
// 5.1) Compiletime Polymorphism
// 5.1.1) Function Overloading  - where same name fun with diff. arguements with different values
//  class Print
//  {
//      public:
//      void show(int x)
//      {
//          cout<<"int : "<<x<<endl;
//      }
//      void show(string str)
//      {
//          cout<<"string : "<<str<<endl;
//      }
//  };
//  int main()
//  {
//      Print obj1;
//      obj1.show(51);//int : 51
//      obj1.show("ApnaCollege");//string : ApnaCollege
//      /*  So when we called the fun then int waale fun me int value pass huyi & string waale fun me string waali val
//          So, in such a way in Function Overloading Compile TIme Polymor[hism is called]
//      */
//  }
//  -------------------

// 5.1.2) Function Overloading  -
/*
Oeprator Overloading - so as we've seen that - in constructor with the same name & diff. parameters - its called COnstrcutor Overloading
When same named function with different arguments are known as Function Overloadig
So similarly when sme operator but works differetn is called Operator Overloading
 */
// class Complex
// {
//     int real;
//     int img;

// public:
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     void ShowNum()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
//     void operator + (Complex &c2)// Operator Overloading
//     {
//         int resReal = this-> real + c2.real;
//         int resImg = this->img + c2.img;
//         Complex c3(resReal, resImg);
//         c3.ShowNum();
//     }
//     void operator - (Complex &c2)// Operator Overloading
//     {
//         int resReal = this-> real - c2.real;
//         int resImg = this->img - c2.img;
//         Complex c3(resReal, resImg);
//         c3.ShowNum();
//     }
// };

// int main()
// {
//     Complex c1(1, 2);
//     Complex c2(3, 4);

//     c1.ShowNum();//1+2i
//     c2.ShowNum();//3+4i
//     c1+c2;//4+6i
//     c1-c2;//-2+-2i
// }
// ____________ ____________ ____________ ____________ ____________
// 5.2)Polymorphism - 2) Runtime Polymorphism
// 5.2.1)Function Overriding  - when parent & child both contain the same fun wit differrent implementation. Parent & child dono classses me same fun h but diff datatypes ke liye diff implementations he , this is Function Overriding.
// class Parent
// {
// public:
//     void show()
//     {
//         cout << "Parent Class Show Function.." << endl;
//     }
// };
// class Child : public Parent
// {
// public:
//     void show()
//     {
//         cout << "Chil CLass Show Function .." << endl;
//     }
// };

// int main()
// {
//     Child child1;//Created Object of child class
//     child1.show();//Chil CLass Show Function ..
// /* Overloading me ek hi class ke under dono fun ka name same hota h jabki
// OverRiding me ek calss inherited hoti h or usme fun ka name same hota he
//  */
// }
// -------------------

// 5.2.2)Virtual Functions - A virtual fun is a member fun tht you expect to be redefined in derived class

// class Parent
// {
// public:
//     virtual void hello()
//     {
//         cout << "parent Hello " << endl;
//     }
// };
// class Child : public Parent
// {
// public:
//     void hello()
//     {
//         cout << "Child classs hello --" << endl;
//     }
// };
// int main()
// {
//     Child child1;//child class ka oonject bnaya he
//     Parent *ptr; // Parent class k liye pointer define kiya he

//     ptr = &child1; // run time waali bindng - Parent class ke pointer ko child class me point kra rhe h
//     ptr->hello();//Child classs hello -- parent class ke pointer se child class ke hello fun ko call kra]tya
//     // Child Func>>Inheritance
// }
// ____________ ____________ ____________ ____________ ____________

// 6) Abstraction - Hiding all unnecessary details & sbhowing only the important parts
/* Access Mofdifer is a way which defined to abstraction. Because for unnecessary detai it can be hide through PRIVATE & PROTECTED while necessary details can be shown through PUBLIC
 */

// 6.1) Pure Virtual Function -
//  class Shape
//  {
//  public:
//      virtual void draw() = 0; // Pure virtual function - enforces derived classes to implement draw()
//  };

// class Circle : public Shape
// {
// public:
//     void draw() override
//     {
//         cout << "Draw Circle -" << endl;
//     }
// };

// class Square : public Shape
// {
// public:
//     void draw() override
//     {
//         cout << "Draw Square -" << endl;
//     }
// };

// int main()
// {
//     Circle cir1;
//     cir1.draw();

//     Square squ1;
//     squ1.draw();

//     return 0;
// }
// ____________ ____________ ____________ ____________ ____________

// 7) Static Keyword -
//  1) For funcitons -

// void Counter()
// {
//     int count = 0;
//     count++;
//     cout << "Count is : " << count << endl;
// };

// int main()
// {
//     Counter(); // Count is : 1
//     Counter(); // Count is : 1
//     Counter(); // Count is : 1
//     /* here w/o declaring static keyowrd in nthe function, the count variable created again and again 3 times in the memory, but when we use static fun then the variable only creates once and updates value
//      */
// }

// void Counter()
// {
//     static int count = 0;
//     count++;
//     cout<<"Count is : "<<count<<endl;
// };

// int main()
// {
//     Counter();//Count is : 1
//     Counter();//Count is : 2
//     Counter();//Count is : 3
// }
// ____________ ____________

// 2) For class
// class Example
// {
// public:
//     int x = 0;
// };
// int main()
// {
//     Example eg1;
//     Example eg2;
//     Example eg3;

//     cout << eg1.x++ << endl; // 0
//     cout << eg2.x++ << endl; // 0
//     cout << eg3.x++ << endl; // 0
// }

// when we use static keyword for the class then it is created for all the objects assignes witht the same class
// when we use static keyword for the class, then for it need to done the declaration(::) of variable witht he class

// class Example
// {
// public:
//     static int x;
// };
// int Example::x = 0; // declaration of x in the example class
// int main()
// {
//     Example eg1;
//     Example eg2;
//     Example eg3;

//     cout << eg1.x++ << endl; // 0
//     cout << eg2.x++ << endl; // 1
//     cout << eg3.x++ << endl; // 2
// }
// ____________ ____________

// 3) For obejcts  - Stattic keyword is for lifetime
// class Example
// {
// public:
//     Example()
//     {
//         cout << "Constructor - " << endl;
//     }

//     ~Example()
//     {
//         cout << "Destructor - " << endl;
//     }
// };
// int main()
// {
//     int a = 0;
//     if (a == 0)
//     {
//          Example eg1;
//     }
//     cout << "Code Ending - " << endl;
// /*
// Constructor -
// Destructor -
// Code Ending -

// Bt what happens when we use static keyword-
//  */
//     if (a == 0)
//     {
//         static Example eg1;
//     }
//     cout << "Code Ending - " << endl;
// /*
// Constructor -
// Destructor -
// Code Ending -
//  */
// }
// ____________ ____________

// 7) Friend Class & Friend Function - A friend who has over ovt info can be reveal outside
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
