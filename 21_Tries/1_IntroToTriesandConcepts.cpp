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
// #include<list>
// #include<iterator>
// #include<stack>
// #include <queue>
// #include <deque>
// #include <map>;
// #include <set>;
// #include<unordered_map>
// #include<unordered_set>using namespace std;
using namespace std;

//1) Trie Intro  -

/*
Trie Data Structure - tb use kiya jaata h jb kisis statement mese kisi string ya owrd klo search krna hota h.
- Trie isliye use kiya jata h kyuki yh inn cases me bhout optimized results deta he.
- Linear time, Binary time ya Heap use kr k kuch na complexity hoti but by using tries... there is optimized complexity
- Trie is logic pr work krta h ki Prefix ko  hme baar baar store nhi kraaanaa, agr common prefix he to.
- In the Insert or Search both the cases TC is given as - O(L) : where L is length of string
- Trie me ek level pr ek character ek hi baar aata h taaki prefixes repeaat naa ho. So for, Fast Retrieval Unordered Map would be used.
- The orogress of string is measurd by a Temporary variable, for every root.
*/

// class Node
// {
// public:
//     unordered_map<char, Node *> children;
//     bool endOfWord;

//     Node()
//     {
//         endOfWord = false;
//     }
// };

// class Trie
// {
//     Node *root;

// public:
//     Trie()
//     {
//         root = new Node();
//     }

//     void insert(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]) == 0)
//             {
//                 temp->children[key[i]] = new Node(); // insert
//             }
//             temp = temp->children[key[i]];
//         }

//         temp->endOfWord = true;
//     }

//     bool search(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]))
//             {
//                 temp = temp->children[key[i]];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return temp->endOfWord;
//     }
// };
// int main()
// {
//     vector<string> words = {"the", "a", "there", "their", "any", "thee1"};
//     Trie trie;

//     for (int i = 0; i < words.size(); i++)
//     {
//         trie.insert(words[i]);
//     }
//     cout << trie.search("their") << endl; // l
//     cout<<trie.search("ant")<<endl;// 0
// }
// ____________ ____________ ____________ ____________ ____________

// 2) Trie Quns -
// 2.1) Word Break Problem -
/*
- we'll be dividing in the fierst and second part. First [art will be searched in trie, if it's True then and then only go for second part.
- qki first part(trie) me hi agr substring nhi he to aage to milegi hi nngi
 */

// class Node
// {
// public:
//     unordered_map<char, Node *> children;
//     bool endOfWord;

//     Node()
//     {
//         endOfWord = false;
//     }
// };

// class Trie
// {
//     Node *root;

// public:
//     Trie()
//     {
//         root = new Node();
//     }

//     void insert(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]) == 0)
//             {
//                 temp->children[key[i]] = new Node(); // insert
//             }
//             temp = temp->children[key[i]];
//         }

//         temp->endOfWord = true;
//     }

//     bool search(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]))
//             {
//                 temp = temp->children[key[i]];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return temp->endOfWord;
//     }
// };
// bool helper(Trie &trie, string key)
// {
//     if (key.size() == 0)
//     {
//         return true;
//     }

//     for (int i = 0; i < key.size(); i++)
//     {
//         string first = key.substr(0, i + 1);
//         string second = key.substr(i + 1);

//         if (trie.search(first) && helper(trie, second))
//         {
//             return true;
//         }
//     }
//     return false;
// }

// bool wordBreak(vector<string> dict, string key)
// {
//     Trie trie;
//     for (int i = 0; i < dict.size(); i++)
//     {
//         trie.insert(dict[i]);
//     }
//     return helper(trie, key);
// }

// int main()
// {
//     vector<string> dict = {"i", "like", "sam", "samsung", "mobile", "ice"};
//     cout << wordBreak(dict, "ilikesamsung") << endl; // 1
//     cout << wordBreak(dict, "ilikesam") << endl; // 1
//     cout << wordBreak(dict, "ilikesuman") << endl; // 0
// }
// ____________ ____________

//2.2) Prefix Problem -

/*
Prefix unique hona chahiye.
*/

// class Node
// {
// public:
//     unordered_map<char, Node *> children;
//     bool endOfWord;
//     int freq;

//     Node()
//     {
//         endOfWord = false;
//     }
// };

// class Trie
// {
//     Node *root;

// public:
//     Trie()
//     {
//         root = new Node();
//         root->freq = -1;
//     }

//     void insert(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]) == 0)
//             {
//                 temp->children[key[i]] = new Node(); // insert
//                 temp->children[key[i]]->freq = 1;
//             }
//             else
//             {
//                 temp->children[key[i]]->freq++;
//             }

//             temp = temp->children[key[i]];
//         }

//         temp->endOfWord = true;
//     }

//     bool search(string key) // O(L)|
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]))
//             {
//                 temp = temp->children[key[i]];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return temp->endOfWord;
//     }

//     string getPrefix(string key)
//     {
//         Node *temp = root;
//         string prefix = "";

//         for (int i = 0; i < key.size(); i++)
//         {
//             prefix += key[i];
//             if (temp->children[key[i]]->freq == 1)
//             {
//                 break;
//             }
//             temp = temp->children[key[i]];
//         }
//         return prefix;
//     }
// };

// void prefixProblem(vector<string> dict) // O(n*L)
// {
//     Trie trie;
//     for (int i = 0; i < dict.size(); i++)
//     {
//         trie.insert(dict[i]);
//     }
//     for (int i = 0; i < dict.size(); i++)
//     {
//         cout << trie.getPrefix(dict[i]) << endl;
//     }
// }
// int main()
// {
//     vector<string> dict = {"zebra", "dog", "duck", "dove"};

//     prefixProblem(dict);
//     /*
//     z
//     dog
//     du
//     dov
//      */
// }
// ____________ ____________

//2.3) StartWithProblem -

// class Node
// {
// public:
//     unordered_map<char, Node *> children;
//     bool endOfWord;
//     int freq;

//     Node()
//     {
//         endOfWord = false;
//     }
// };

// class Trie
// {
//     Node *root;

// public:
//     Trie()
//     {
//         root = new Node();
//         root->freq = -1;
//     }

//     void insert(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]) == 0)
//             {
//                 temp->children[key[i]] = new Node(); // insert
//                 temp->children[key[i]]->freq = 1;
//             }
//             else
//             {
//                 temp->children[key[i]]->freq++;
//             }

//             temp = temp->children[key[i]];
//         }

//         temp->endOfWord = true;
//     }

//     bool search(string key) // O(L)|
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]))
//             {
//                 temp = temp->children[key[i]];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return temp->endOfWord;
//     }

//     bool startWith(string prefix)
//     {
//         Node *temp = root;

//         for (int i = 0; i < prefix.size(); i++)
//         {
//             if (temp->children[prefix[i]])
//             {
//                 temp = temp->children[prefix[i]];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };

// int main()
// {
//     vector<string> words = {"apple", "app", "mango", "man", "woman"};

//     Trie trie;
//     for (int i = 0; i < words.size(); i++)
//     {
//         trie.insert(words[i]);
//     }
//     cout << trie.startWith("app") << endl;  // 1
//     cout << trie.startWith("moon") << endl; // 0
//     cout << trie.startWith("wom") << endl;  // 1
// }
// ____________ ____________

//2.4) COunt Unique Substring -
/*
- Given string is Substring nikalo and ab yaa to prefix ke saare suffix nikaal lo ya phr suffix ke prefix nikal lo.
- hm yaa phle string ke saare suffix nikalneg and then uske unique prefix nikalenge.
- Trie ki substrings hi uniqie prefixes hote he. Isliye phle hm string ke possible suffix nikalenge or phr unke unique prefix nikalnege.
- Suffix nikalnge ke baad trie use kr k prefix nikal lenge , we know that.. lekin prefix nikal ke unique siffix hm kese nikalte, we don;t know, that's why first get all suffix of a string and then get all unique prefixes using Trie.
*/

// class Node
// {
// public:
//     unordered_map<char, Node *> children;
//     bool endOfWord;

//     Node()
//     {
//         endOfWord = false;
//     }
// };

// class Trie
// {
//     Node *root;
//     int uniqueCount; // counts unique substrings (excluding empty)

// public:
//     Trie()
//     {
//         root = new Node();
//         uniqueCount = 0;
//     }

//     void insert(string key) // O(L)
//     {
//         Node *temp = root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if (temp->children.count(key[i]) == 0)
//             {
//                 temp->children[key[i]] = new Node();
//                 uniqueCount++; // new node = new unique substring
//             }
//             temp = temp->children[key[i]];
//         }
//         temp->endOfWord = true;
//     }

//     int getUniqueSubstringCount()
//     {
//         // always include empty substring
//         return uniqueCount + 1;
//     }

//     void printAll(Node *node, string current)
//     {
//         // print only non-empty substrings
//         if (!current.empty())
//             cout << current << "\n";

//         for (auto &child : node->children)
//         {
//             printAll(child.second, current + child.first);
//         }
//     }

//     void printAllSubstrings()
//     {
//         cout << "\"\" (empty substring)\n"; // include empty
//         printAll(root, "");
//     }
// };

// int main()
// {
//     string s = "apple";
//     Trie trie;

//     // Step 1: Insert all suffixes
//     for (int i = 0; i < s.size(); i++)
//     {
//         string suffix = s.substr(i);
//         trie.insert(suffix);
//     }

//     // Step 2: Print all unique substrings
//     cout << "All unique substrings of \"" << s << "\":\n";
//     trie.printAllSubstrings();

//     // Step 3: Print count
//     cout << "\nUnique substrings count = "
//          << trie.getUniqueSubstringCount() << endl;

//     /*
//     All unique substrings of "ababa":
//     "" (empty substring)
//     b
//     ba
//     bab
//     baba
//     a
//     ab
//     aba
//     abab
//     ababa

//     Unique substrings count = 10

//     All unique substrings of "apple":
// "" (empty substring)
// e
// l
// le
// p
// pl
// ple
// pp
// ppl
// pple
// a
// ap
// app
// appl
// apple

// Unique substrings count = 15
//      */
// }
// ____________ ____________

//2.5) Longest Word with all Prefix  -
/*
String ke saare prefix string me hona chahiye and sb pr True hona chahiye. In the same string need to follow Lexographical Order.(First come order of Alphabet)
 */

class Node
{
public:
    unordered_map<char, Node *> children;
    bool endOfWord;

    Node()
    {
        endOfWord = false;
    }
};

class Trie
{
    Node *root;
    int uniqueCount; // counts unique substrings (excluding empty)

    void longestHelper(Node *node, string &ans, string temp)
    {
        for (auto &child : node->children)
        {
            if (child.second->endOfWord)
            {
                temp += child.first;

                if ((temp.size() == ans.size() && temp < ans) || (temp.size() > ans.size()))
                {
                    ans = temp;
                }

                longestHelper(child.second, ans, temp);

                temp.pop_back(); // backtrack
            }
        }
    }

public:
    Trie()
    {
        root = new Node();
        uniqueCount = 0;
    }

    void insert(string key) // O(L)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (temp->children.count(key[i]) == 0)
            {
                temp->children[key[i]] = new Node();
                uniqueCount++; // new node = new unique substring
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    string longestStringWithEoW()
    {
        string ans = "";
        longestHelper(root, ans, "");
        return ans;
    }
};

string longestString(vector<string> dict)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    return trie.longestStringWithEoW();
}

int main()
{
    vector<string> dict = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    cout << longestString(dict) << endl; //apple

    vector<string> dict2 = {"a", "banana", "app", "appl", "ap", "apply"};
    cout << longestString(dict2) << endl; //apply 
    return 0;
}
// ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________ ____________