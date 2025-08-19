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

//1) Hashmap Data Structures using Hash Table Implementation -  
/*
- Hashmap Data structure always uses Hash Table to store the data.
- In Hashmap Table the paramters are - (Key,Value) at where key must be UNIQUE always.
- The Unique Selling Point of Hash Table is it perform in O1() time.
- HashMap data structure can only be used where the order of data doesn't matter.
- For those data in which step by step sequence or ordere is important Hashmap can;t be used
-  before rehash Tc was O(1), but in cases when rehashing isusing tc is -O(n)
- Rehashing doesn't use for every Table.
*/

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class HashTable
{
    int totalsize;
    int currsize;
    Node **table;

    int Hashfunction(string key) // Till here the complexity is O(1) - constant
    {
        int idx = 0;
        for (int i = 0; i < key.size(); i++)
        {
            idx = (idx + (key[i] * key[i])) % totalsize;
        }
        return idx % totalsize;
    }

    void rehash()
    {
        Node **oldTable = table;
        int oldSize = totalsize;

        totalsize = 2 * totalsize;
        currsize = 0;
        table = new Node *[totalsize]; // pssing the size not the value

        for (int i = 0; i < totalsize; i++)
        {
            table[i] = NULL;
        }

        // copy old values
        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size = 5)
    {
        totalsize = size;
        currsize = 0;
        table = new Node *[totalsize];

        for (int i = 0; i < totalsize; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, int val) // O(1) - On Avg
    {
        int idx = Hashfunction(key);

        Node *newNode = new Node(key, val);

        newNode->next = table[idx];
        table[idx] = newNode;

        currsize++;

        double lambda = currsize / (double)totalsize;
        if (lambda > 1)
        {
            rehash(); // before rehash Tc was O(1), but in cases when rehashing isusing tc is -O(n)
            // O(n) - in worst
        }
    }

    bool exists(string key)
    {
        int idx = Hashfunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key) // Found
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key)
    {
        int idx = Hashfunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key) // Found
            {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }

    void remove(string key)
    {
        int idx = Hashfunction(key);

        Node *temp = table[idx];
        Node *prev = temp;
        while (temp != NULL) // O(lambda)
        {
            if (temp->key == key) // Erase
            {
                if (prev == temp) // head
                {
                    table[idx] = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    void print()
    {
        for (int i = 0; i < totalsize; i++)
        {
            cout << "idx :" << i << "->";
            Node *temp = table[i];
            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->val << ")->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    HashTable ht;

    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("US", 50);
    ht.insert("Nepal", 10);
    ht.insert("UK", 20);

    if (ht.exists("India"))
    {
        cout << "India Population : " << ht.search("India") << endl;
    }
    /*
    India Population : 150
     */

    if (ht.exists("UK"))
    {
        cout << "UK Population : " << ht.search("UK") << endl;
    }
    /*
     UK Population : 20
     */
    if (ht.exists("Singapur"))
    {
        cout << "Singapur Population : " << ht.search("Singapur") << endl; // Not rexist  so prints nothing
    }
    ht.print();
    cout << endl;
    /*
    idx :0->(UK,20)->
    idx :1->
    idx :2->(Nepal,10)->
    idx :3->(India,150)->
    idx :4->(US,50)->(China,150)->
     */

    ht.remove("UK");
    ht.print();
    cout << endl;
    /*
    idx :0->
    idx :1->
    idx :2->(Nepal,10)->
    idx :3->(India,150)->
    idx :4->(US,50)->(China,150)->
     */
}
// ____________ ____________ ____________ ____________ ____________
