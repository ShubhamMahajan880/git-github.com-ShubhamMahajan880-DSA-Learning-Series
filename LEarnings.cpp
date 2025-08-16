#include <bits/stdc++.h>
// #include <iostream>
// #include<algorithm>
// #include<climits>
// #include<cctype>
// #include<iomanip>
// #include<cmath>
// #include<vector>
// #include<set>
// #include<string>
// #include <map>;
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    bool operator<(const Student &obj) const
    {
        return this->name > obj.name;
    }
};
int main()
{
    priority_queue<Student> pq;
    pq.push(Student("Bharat", 42));
    pq.push(Student("Chaitanya", 89));
    pq.push(Student("Anaya", 12));

    while (!pq.empty())
    {
        cout << "Top - " << pq.top().name << "," << pq.top().marks << endl;
        pq.pop();
    }
}
