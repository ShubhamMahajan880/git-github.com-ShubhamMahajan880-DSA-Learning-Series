#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> heights)
{
    cout << "Given heights of histograms are - " << endl;
    for (int i = 0; i < heights.size(); i++)
    {
        cout << heights[i] << " ";
    }
    cout << endl;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> Leftside(n), Rightside(n);
    stack<int> s;

    // Next Smaller to Left
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }

        if (s.empty())
            Leftside[i] = -1;
        else
            Leftside[i] = s.top();

        s.push(i);
    }

    // Clear stack for next computation
    while (!s.empty())
        s.pop();

    // Next Smaller to Right
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }

        if (s.empty())
            Rightside[i] = n;
        else
            Rightside[i] = s.top();

        s.push(i);
    }

    int maxarea = 0;
    for (int i = 0; i < n; i++)
    {
        int height = heights[i];
        int width = Rightside[i] - Leftside[i] - 1;
        int area = height * width;
        maxarea = max(area, maxarea);
    }

    return maxarea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    printArray(heights);

    int ans = largestRectangleArea(heights);
    cout << "The Max Area in Histogram is: " << ans << endl;
}
