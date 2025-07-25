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

class College
{
    string name;
    string department;
    int rollno;
    long double contactno;

public:
    // Setters to acess the pvt class  -
    void setName(string name)
    {
        this->name = name;
    }

    void setDepartment(string department)
    {
        this->department = department;
    }

    void setrollno(int rollno)
    {
        this->rollno = rollno;
    }

    void setContactNo(long double contacto)
    {
        this->contactno = contactno;
    }

    // Now using Getetrs for accessing setters

    string getdepartment()
    {
        return this->department;
    }

    int getrollno()
    {
        return this->rollno;
    }

    long double getcontactno()
    {
        return this->contactno;
    }

    string getname()
    {
        return this->name;
    }
};

int main()
{
    College C1;
    C1.setContactNo(9669999880);
    C1.setDepartment("BTECH CSE AI");
    C1.setName("Shubh MHajaAN");
    C1.setrollno(4088);

    cout << C1.getname() << endl;
    cout << C1.getdepartment() << endl;
    cout << C1.getcontactno() << endl;
    cout << C1.getrollno() << endl;
}