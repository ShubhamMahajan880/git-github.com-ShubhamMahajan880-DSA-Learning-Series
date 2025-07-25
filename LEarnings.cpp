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
    string studentname;
    int rollno;
    long double mobileno;

public:
    // Setter
    void setName(string Name)
    {
        studentname = Name;
    }

    void setRollno(int Rollno)
    {
        rollno = Rollno;
    }

    void setMobileNo(long double MobileNo)
    {
        mobileno = MobileNo;
    }
    // Getters
    string getName()
    {
        return studentname;
    }

    int getRollno()
    {
        return rollno;
    }

    long double getMobileNo()
    {
        return mobileno;
    }
};

int main()
{
    College c1;
    // Setting values throug Setters-
    c1.setName("ShubhamMahajan");
    c1.setMobileNo(966999880);
    c1.setRollno(4088);

    // Getting values through Getters
    cout << c1.getName() << endl;
    cout << c1.getMobileNo() << endl;
    cout << c1.getRollno() << endl;
}