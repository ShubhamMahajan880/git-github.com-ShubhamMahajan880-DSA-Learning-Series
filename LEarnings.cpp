#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> books, int m, int n, int mid)
    {
        int student = 1;

        int pageAllocated = 0;

        for (int i = 0; i < n; i++)
        {
            if (pageAllocated + books[i] <= mid)
            {
                pageAllocated += books[i];
            }
            else
            {
                student++;
                if (student > m || books[i] > mid)
                {
                    return false;
                }
                pageAllocated = books[i];
            }
        }
        return true;
    }
    int bookAllocated(vector<int> &books, int m)
    {
        int n = books.size();
        if (m > n)
        {
            return -1;
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += books[i];
        }
        int s = 0;
        int end = sum;
        int ans = -1;

        while (s <= end)
        {
            int mid = s + (end - s) / 2;
            if (isPossible(books, m, n, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};