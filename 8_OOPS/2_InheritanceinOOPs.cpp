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
//4)Inheritance -
// 4.1) Mode of Inheritance - 
// Case - 1 - when both(parent & child class) are public
// class Animal
// {
// public:
//     string color;

//     void eat()
//     {
//         cout << "eats -" << endl;
//     }

//     void breathe()
//     {
//         cout << "breathes - " << endl;
//     }
// };

// class Fish : public Animal // Inheritance.
// {
// public:
//     int fins;

//     void swim()
//     {
//         cout << "swims - " << endl;
//     }
// };
// /*
// 📒 - In inheritance here is 2 classes alreaady defined eat and breathe,
// so the 3rd class forfish which also having these proertiesw and pne more property of swim which
// can be declare in this classs  and can be inherited from other class too.
// */
// int main()
// {
//     Fish f1;
//     f1.fins = 3;
//     cout << f1.fins << endl;
//     f1.swim();    // swims
//     f1.eat();     // eats
//     f1.breathe(); // breathes
//     /* So, how this 3rd class fish is able to access the elements of above 2 classes, by using Inheritance
//      */
// }
// -------------------

// What if I do the same for Protected class -
// Case - II - when parent class is public but the child class is protected -  can;tbe accessed by main fun
// class Animal
// {
// public:
//     string color;

//     void eat()
//     {
//         cout << "eats -" << endl;
//     }

//     void breathe()
//     {
//         cout << "breathes - " << endl;
//     }
// };

// class Fish2 : protected Animal // Inheritance.
// {
// public:
//     int fins2;

//     void swim2()
//     {
//         cout << "swims - " << endl;
//     }
// };

// int main()
// {
//     Fish2 f1;
//     f1.fins2 = 3;
//     cout << f1.fins2 << endl;
//     f1.swim2();   // swims
/* f1.eat();     // error: 'void Animal::breathe()' is inaccessible within this context
// f1.breathe(); // error: 'Animal' is not an accessible base of 'Fish2'
// SO clearly inacesible from main fun if class is protected , but can be acessed within the same class
*/
// }
// -------------------
// But within the calss, it can be accessible - inside the protected child class public parent clss can be accessed, not from main fun.

// class Animal
// {
// public:
//     string color;

//     void eat()
//     {
//         cout << "eats -" << endl;
//     }

//     void breathe()
//     {
//         cout << "breathes - " << endl;
//     }
// };

// class Fish2 : protected Animal // Inheritance.
// {
// public:
//     int fins2;

//     void swim2()
//     {
//         eat();
//         cout << "swims - " << endl;
//     }
// };

// int main()
// {
//     Fish2 f1;
//     f1.fins2 = 3;
//     cout << f1.fins2 << endl; // 3
//     f1.swim2();
//     /*
//     eats
//     swims
//     So, when the inside the protrcted class another classes are defined then can be accessed from main func
//      */
// }
// -------------------
// Case III - when the the parent class is by default Private & the child class is Public -

// class Animal
// {
// private:
//     string color;

//     void eat()
//     {
//         cout << "eats -" << endl;
//     }

//     void breathe()
//     {
//         cout << "breathes - " << endl;
//     }
// };

// class Fish2 : public Animal // Inheritance.
// {
// public:
//     int fins2;

//     void swim2()
//     {
//         // eat();
//         cout << "swims - " << endl;
//     }
// };

// int main()
// {
//     Fish2 f1;
//     f1.fins2 = 3;
//     cout << f1.fins2 << endl; // 3
//     f1.swim2();
// /* O/p -
// Inheritance.cpp: In member function 'void Fish2::swim2()':
// Inheritance.cpp:167:9: error: 'void Animal::eat()' is private within this context
//          eat();
//          ^~~
// Inheritance.cpp:149:10: note: declared private here
//      void eat()
//           ^~~
// Inheritance.cpp:167:13: error: 'void Animal::eat()' is private within this context
//          eat();
//              ^
// Inheritance.cpp:149:10: note: declared private here
//      void eat()
//           ^~~
// 📒 So, in the case where Parernt class is Pvt then not access to the child class either it's oublicor protected
//  */
// }
// ____________ ____________ ____________ ____________ ____________

//4.2) types of Inheritance -
//4.2.1) Single Inheritance -
// class Animal
// {
// public:
//     string color;

//     void eat()
//     {
//         cout << "eats -" << endl;
//     }

//     void breathe()
//     {
//         cout << "breathes - " << endl;
//     }
// };

// class Fish : public Animal // Inheritance.
// {
// public:
//     int fins;

//     void swim()
//     {
//         cout << "swims - " << endl;
//     }
// };

// int main()
// {
//     Fish f1;

//     f1.swim();    // swims
//     f1.eat();     // eats
//     f1.breathe(); // breathes
// }
// ____________ ____________

//4.2.2) Multi-Level Inheritance -
// class Animal
// {
// public:
//     void eats()
//     {
//         cout << "Eats..." << endl;
//     }
//     void breath()
//     {
//         cout << "Breaths..." << endl;
//     }
// };

// class Mammal : public Animal// Mammal class inherits all properties of Animal Class
// {
// public:
//     string bloodtype = "Warm";
//     // Or can also be called byh constructor -
//     string bloodcolor;
//     Mammal()
//     {
//         bloodcolor = "Greenish";
//     }
// };

// class Dog : public Mammal// while the dog class inherits all properties of Mammal class as well as Animal class too
// {
// public:
//     void tailmovement()
//     {
//         cout << "Dog can also wipe out its tail everytim,e" << endl;
//     }
// };

// int main()
// {
//     Dog d1;
//     d1.eats();
//     d1.breath();
//     d1.tailmovement();
//     cout << "So, the colour of blood is - " << d1.bloodcolor << endl;
// /*
// Eats...
// Breaths...
// Dog can also wipe out its tail everytim,e
// So, the colour of blood is - Greenish
// */
// }
// ____________ ____________

//4.2.3) Multiple Inheritance -

// class Teacher
// {
// public:
//     int salary;
//     string subject;
// };
// class Student
// {
// public:
//     long rollno;
//     float cgpa;
// };
// class TA : public Teacher, public Student
// {
// public:
//     string name;
// };

// int main()
// {
//     TA ta1;
//     ta1.name = "Shubham Mahajan";
//     ta1.subject = "C++";
//     ta1.rollno = 4088;
//     ta1.cgpa = 7.5;

//     cout << ta1.name << endl;//Shubham Mahajan
//     cout << ta1.cgpa << endl;//7.5
//     cout << ta1.subject << endl;//C++
//     cout << ta1.rollno << endl;//4088
// }
// ____________ ____________

//4.2.4) Hierarchical Inheritance -

// class Animal
// {
// public:
//     void Eat()
//     {
//         cout << "Can eat easily" << endl;
//     }
//     void Breathe()
//     {
//         cout << "Breathing as a regular process.." << endl;
//     }
// };

// class Bird : public Animal
// {
// public:
//     void fly()
//     {
//         cout << "Can fly too.." << endl;
//     }
// };

// class Fish : public Animal
// {
// public:
//     void swim()
//     {
//         cout << "Can swim in water..." << endl; 
//     }
// };

// class Mammal : public Animal
// {
// public:
//     void walk()
//     {
//         cout << "Can also walk regularly.." << endl;
//     }
// };

// int main()
// {
//     Mammal m1;
//     m1.Breathe();//Breathing as a regular process..
//     m1.Eat();//Can eat easily
//     m1.walk();//Can also walk regularly..

//     cout << endl;

//     Bird b1;
//     b1.Eat();//Can eat easily
//     b1.Breathe();//Breathing as a regular process..
//     b1.fly();//Can fly too..

//     cout << endl;

//     Fish f1;
//     f1.Breathe();//Breathing as a regular process..
//     f1.swim();//Can swim in water...

//     return 0;
// // So, the clearly visible example of Hierarchical Inheritacne wheather multiple derived classeds from the one base class
// }

// ____________ ____________

//4.2.5) Hybrid Inheroitance -

// class Animal
// {
// public:
//     void Eat()
//     {
//         cout << "Can eat easily" << endl;
//     }
//     void Breathe()
//     {
//         cout << "Breathing as a regular process.." << endl;
//     }
// };

// class Fish : public Animal
// {
// public:
//     void swim()
//     {
//         cout << "Can swim in water..." << endl;
//     }
// };

// class Turtle : public Fish
// {
// public:
//     void walkAndSwim()
//     {
//         cout << "Can also walk as well as swim too.." << endl;
//     }
// };

// class Bird : public Animal
// {
// public:
//     void fly()
//     {
//         cout << "Can fly too.." << endl;
//     }
// };

// int main()
// {
//     Turtle t1;
//     t1.Breathe();//Breathing as a regular process..
//     t1.Eat();//Can eat easily
//     t1.swim();//Can swim in water...
//     t1.walkAndSwim();//Can also walk as well as swim too..

// /*  📒 -  so clearly its an example if Hybrid Inheritance(as the combonatoin of more tha one inheritance) wheather - 
// Single Imheritace - Class Fish is derived from Class Animal - 
// Multi Level Inheritance - Class Turtle is derivedf from class fish which is further derived from Animal class
// Hierarchical Inheritance - Class Bird is aslo derived from the class Animal
//  */

// }
// ____________ ____________ ____________ ____________ ____________