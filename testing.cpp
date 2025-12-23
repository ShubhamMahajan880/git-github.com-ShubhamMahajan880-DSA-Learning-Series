#include <bits/stdc++.h>
using namespace std;

// 4) Push at Bottom of the Stack -

void pushAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }

    int temp = st.top();
    st.pop();

    pushAtBottom(st, val);

    st.push(temp);
}
void printStack(stack<int> st)
{
    // Pass by value to avoid modifying the original stack
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "So, the current stack is - " << endl;
    printStack(st); // Just print, don't pop

    int valueToInsert = 4;

    pushAtBottom(st, valueToInsert);

    cout << "After pushing at bottom stack we have is - " << endl;
    printStack(st);

    return 0;
    /*
    So, the current stack is -
    3 2 1
    After pushing at bottom stack we have is -
    3 2 1 4

     */
}
