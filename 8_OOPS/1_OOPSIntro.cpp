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
// Calsses & Object basic Intro -

// class User
// {
//     int id;
//     string username;
//     string password;
//     string bio;
//     string profilephoto;

//     void deactivate()
//     {
//         cout << "Do you rally wnatt to delete your account" << endl;
//     }

//     void editBio(string newBio)
//     {
//         bio = newBio;
//         cout << "Bio updated successfully" << endl;
//     }

//     void changeProfile(string newprofile)
//     {
//         profilephoto = newprofile;
//         cout << "You got a new profile" << endl;
//     }
// };

// int main()
// {
//     User first;
// }
// -------------------

// // AccessModifiers -
// class Student
// {
//     // Properties
//     string name;

// private:
//     string password;

// public:
//     long MobileNo;
//     float cgpa;

//     //  methods -
//     void getPercentage()
//     {
//         cout << (cgpa * 10) << endl;
//     }
// };

// int main()
// {
//     Student s1;                 // S1 is an object of student named class
//     cout << sizeof(s1) << endl; // 32 -  bytes allocate to this createc class, some for string, some for float and some for the class

//     // s1.name = "Shubham";
//     // - can't do this operation as the class is not accessible here. For performig this need to amke it Public, Proivate

//     s1.MobileNo = 98264;
//     cout << s1.MobileNo << endl; // 98264
//     s1.cgpa = 7.5;
//     cout << s1.cgpa << endl;

//     // and as the method is alsop public now, so can be accessed through the fun
//     s1.getPercentage(); // 75
// }

/* 📒If we want tot access the private calss info in the main fun eed to amke oit pubvlic also
    FOr accessing the Privaate Class info here is a method - FRIEND FUNCITON.
    Protected will be used in Inheroitence where the proeprties within a class will also be used by its derived class
 */
// -------------------

// Getters & Setters -
// class Student
// {
//     string name;
//     float cgpa;

// public:
//     void getPercentage()
//     {
//         cout << (cgpa * 10) << endl;
//     }
//     // Setters  - basicly uses when don;t have direct acess to the Private elements of class but can be modified throug setters
//     void setName(string nameval)
//     {
//         name = nameval;
//     }
//     void setCgpa(float cgpaval)
//     {
//         cgpa = cgpaval;
//     }

//     // Getters - the vakue which we set through setter can be accesed through getters, as can;t access to the pvt class, so cna be done byu thios Getter,Setters
//     string getName()
//     {
//         return name;
//     }
//     float getCgpa()
//     {
//         return cgpa;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.setName("Shubham");
//     s1.setCgpa(7.55);

//     cout<<s1.getName()<<endl;//Shubham
//     cout<<s1.getCgpa()<<endl;//7.55
// }
// -------------------
// Encapsulations - EK single unit me data & memeber Functions ko implement krna. Matlab data member(property)  & memeber function(methods)
// Abstraction - Constructor automatically create ho jaata h object creatin ke tym pr

// class Car
// {
//     string name;
//     string color;

// public:
//     Car(string nameValue, string colorvalue)
//     {
//         cout << "Constructor is called object being created----" << endl;
//         name = nameValue;
//         color = colorvalue;
//     }

// public:
//     void start()
//     {
//         cout << "Car has started.." << endl;
//     }
//     void stop()
//     {
//         cout << "Car has been stopped.." << endl;
//     }

//     // Getter
//     string getName()
//     {
//         return name;
//     }
// };

// int main()
// {
//     // Car c1;//// Constructor is called object being created----
//     Car c1("Altroz", "Black");
//     cout << "Car name : " << c1.getName() << endl; // Car name : Altroz
// }
// -------------------

// This Constrcutor -this is a special pointer in c++ that points to the current object
// class Car1
// {
//     string name;
//     string color;

// public:
//     Car1(string name, string color)
//     {
//         cout << "Constructor is called. Object being created ..." << endl;
//         this->name = name;// phle waala name jo object bnaya uska h & dusra name jo fun me pass kiya uska he
//         this->color = color;
//     }
// };
// int main()
// {
//     Car1 c1("Altroz","Black");
// }
// -------------------

// Types of Cosntrcutrs -

// class Car2
// {
//     string name;
//     string color;

// public:
//     Car2() // Non- Parameterized Constrcutor
//     {
//         cout << "Constructore w/o parameters " << endl;
//     }
//     Car2(string name, string color) // Parameteizewd constructor
//     {
//         cout << "Constructor with Parameters - " << endl;
//         this->name = name;
//         this->color = color;
//     }

//     // Getter
//     string getName()
//     {
//         return name;
//     }
// };
// int main()
// {   Car2 c0;//anyh object created for the class. this is non araterized constrcuot
//     Car2 c1("Altroz", "Black");
//     Car2 c2("Mahindra SUV AMT","Dark Blue");
// /*
// Constructore w/o parameters
// Constructor with Parameters -
// Constructor with Parameters -
//  */
// }
// -------------------
/*
Practice Qs
➡️ Create a User class with properties:
id (private), username (public) & password (private).

Its id should be initialized in a parameterized constructor.

It should have a Getter & Setter for password.
 */
// class User
// {
// private:
//     int id;
//     string password;

// public:
//     string username;

//     User(int id)
//     {
//         this->id = id; // this mean jo bhi current id h isme created parameter waali id ki value aa kr store ho jaaygi
//     }

//     // Getter
//     string getPassword()
//     {
//         return password;
//     }

//     // Setter
//     void setPassword(string password)
//     {
//         this->password = password;
//     }
// };
// int main()
// {
//     User user1(101);
//     user1.username = "MicrosftHyderabad";
//     user1.setPassword("Shubh@51LPA");

//     cout << "username : " << user1.username << endl;      // username : MicrosftHyderabad
//     cout << "password : " << user1.getPassword() << endl; // password : Shubh@51LPA

// }
// -------------------

// Copy Constructor Conceppt -
// class Car
// {
// public:
//     string name;
//     string color;

//     Car(string name, string color) // Parameteizewd constructor
//     {
//         this->name = name;
//         this->color = color;
//     }

//     Car(Car &original) // creating a copy constructor from the given original constrcuto at the same time
//     {
//         cout << "Copying original to new...." << endl;
//         name = original.name;
//         color = original.color;
//     }
// };
// int main()
// {
//     Car c1("Maninda SUV 700", "Dark Blue");

//     Car c2(c1);
//     cout << c2.name << endl;  // Maninda SUV 700
//     cout << c2.color << endl; // Dark Blue
//     // 📒 - by using the c1 we could access through c2. at where we passed c1/ So w/o creating a seperate cosntruuctor using c1 we could acess.

//     // Own custom copy constrcutor -
//     Car c3(c1);//Copying original to new....
//     cout << c3.name << endl;//Maninda SUV 700
//     cout << c3.color << endl;//Dark Blue

// }
// -------------------
// Shallo & Deep Copy -
/*
📒 -copy constr. concept me saare statric var to  copy ho jaate h as it is from original memory
but dynamic constr. not copy while they orignaly copy from the heap memo and even on chaniging  in copies constrcutor the changes reflected in original constrctr adn heap emo. too
*/

// class Car
// {
// public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string name, string color) // Parameteizewd constructor
//     {
//         this->name = name;
//         this->color = color;// These 2 are static allocation with proper copy from main meo
//         mileage = new int;// Dynamic Allocation - copy from heap memo on the behalf of addres & directly change in main and hap memo
//         *mileage = 12;
//     }

//     Car(Car &original) // creating a copy constructor from the given original constrcuto at the same time
//     {
//         cout << "Copying original to new...." << endl;
//         name = original.name;
//         color = original.color;
//         mileage = original.mileage;
//     }
// };
// int main()
// {
//     Car c1("Maninda SUV 700", "Dark Blue");

//    // Own custom copy constrcutor -
//     Car c3(c1);//Copying original to new....
//     cout << c3.name << endl;//Maninda SUV 700
//     cout << c3.color << endl;//Dark Blue
//     cout<<*c3.mileage<<endl;//12
//     *c3.mileage = 10;
//     cout<<*c1.mileage<<endl;///10 - so we did the xhange in c3 but also goit the change in c1 as in pointer or address also changges in main addres
// }
// -------------------
// what if i do changes in Original construcotr not the custom created constructor-
// class Car
// {
// public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string name, string color) // Parameteizewd constructor
//     {
//         this->name = name;
//         this->color = color; // These 2 are static allocation with proper copy from main meo
//         mileage = new int;   // Dynamic Allocation - copy from heap memo on the behalf of addres & directly change in main and hap memo
//         *mileage = 12;
//     }
// };
// int main()
// {
//     Car c1("Maninda SUV 700", "Dark Blue");
//     // On changin in the main original ocnstr.
//     Car c2(c1);
//     cout << c2.name << endl;     // Maninda SUV 700
//     cout << c2.color << endl;    // Dark Blue
//     cout << *c2.mileage << endl; // 12
//     *c2.mileage = 10;
//     cout << *c1.mileage << endl; /// 10 - so we did the xhange in c2 which is in original constrr but also goit the change in c1 as in pointer or address also changges in main addres
// }
// -------------------
// Destructor  - It deletes the created constrcutors automaticqlly, bbut for custom constructores need to creatre destructor manually
// class Car
// {
// public:
//     string name;
//     string color;
//     int *mileage;

//     Car(string name, string color) // Parameteizewd constructor
//     {
//         this->name = name;
//         this->color = color; // These 2 are static allocation with proper copy from main meo
//         mileage = new int;   // Dynamic Allocation - copy from heap memo on the behalf of addres & directly change in main and hap memo
//         *mileage = 12;
//     }
//     ~Car()
//     {
//         cout << "Deletting Object - " << endl;
//     }
// };
// int main()
// {
//     Car c1("Maninda SUV 700", "Dark Blue");
//     cout << c1.name << endl;     
//     cout << c1.color << endl;    
//     cout << *c1.mileage << endl; 
//     /*
//     Dark Blue
//     12
//     Deletting Object -

//      */
// }
// ____________ ____________ ____________ ____________ ____________
