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

//9) DoublyLinkedList Concept - 
class Node
{
public:
    int Data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        Data = val;
        prev = next = NULL;
    }
};

class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }
    // Pushing ELements from front
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void push_back()
    {

    }

    void pop_back()
    {

    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->Data << "<=>";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyList dbll;

    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.printList(); // 1<=>2<=>3<=>4<=>5<=>NULL
    dbll.pop_front();
    dbll.printList();//2<=>3<=>4<=>5<=>NULL
}
// ____________ ____________ ____________ ____________ ____________
