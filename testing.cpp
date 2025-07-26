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

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        cout << "Then Node Destructor Called after for data - " << data << endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        cout << "List Destrcutor Called first for deleting the LL" << endl;
        if (head != NULL)
        {

            delete head;
        }
    }

    // 1) Push Front
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    // 2) Push Back -
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // 3) Print List -
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "--> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 4) Deleting LL -
    // 4.1) Pop_front
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is Empty Alrady" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // 5) Pop_back
    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // 6) Insert element -
    void insert_element(int val, int poss)
    {
        Node *newnode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < poss - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Entered Possiiton is Invalied - " << endl;
                return;
            }

            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    // 7) Search Element -
    int iterative_search(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Key Successfully found at - " << idx << endl;
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        cout << "Element is not existing throughout the LL - " << endl;
        return -1;
    }
};

int main()
{
    List ll;
    ll.push_front(15);
    ll.push_front(10);
    ll.push_front(5);
    ll.print_list();
    cout << "- -  - --------------------" << endl;

    ll.push_back(20);
    ll.push_back(25);
    ll.print_list();
    cout << "- -  - --------------------" << endl;

    ll.pop_front();
    ll.print_list();
    cout << "- -  - --------------------" << endl;

    ll.pop_back();
    ll.print_list();
    cout << "- -  - --------------------" << endl;

    ll.insert_element(75, 1);
    ll.print_list();
    cout << "- -  - --------------------" << endl;

    cout << ll.iterative_search(75) << endl;
    cout << ll.iterative_search(10) << endl;
    cout << "- -  - --------------------" << endl;
    return 0;

    /*
    5--> 10--> 15--> NULL
    - -  - --------------------
    5--> 10--> 15--> 20--> 25--> NULL
    - -  - --------------------
    Then Node Destructor Called after for data - 5
    10--> 15--> 20--> 25--> NULL
    - -  - --------------------
    Then Node Destructor Called after for data - 25
    10--> 15--> 20--> NULL
    - -  - --------------------
    10--> 75--> 15--> 20--> NULL
    - -  - --------------------
    Key Successfully found at - 1
    1
    Key Successfully found at - 0
    0
    - -  - --------------------
    List Destrcutor Called first for deleting the LL
    Then Node Destructor Called after for data - 10
    Then Node Destructor Called after for data - 75
    Then Node Destructor Called after for data - 15
    Then Node Destructor Called after for data - 20

     */
}