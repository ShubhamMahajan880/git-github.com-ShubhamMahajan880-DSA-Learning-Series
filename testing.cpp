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

public:
    string name;
    string department;
    int rollno;
    long double contactno;
    string *clgtype;

    College(string name, string department)
    {
        this->name = name;
        this->department = department;
        clgtype = new string;
        *clgtype = "Priovate";
    }

    // Creating Custom Copy COnstructor -
    College(College &original)
    {
        cout << "Copying Original to the New COnstructor" << endl;
        name = original.name;
        department = original.department;
        // clgtype = original.clgtype; // Shallow Copy change in the referencees only
        clgtype = new string;
        *clgtype = *original.clgtype; // Deep Copy
    }

    ~College()
    {
        cout << "Deletung through Destructor by defaulyt" << endl;
    }
};

int main()
{
    College C1("Shubham Mahajan", "CSE AI");

    cout << C1.name << endl;
    cout << C1.department << endl;
    cout << *C1.clgtype << endl;

    return 0;
}