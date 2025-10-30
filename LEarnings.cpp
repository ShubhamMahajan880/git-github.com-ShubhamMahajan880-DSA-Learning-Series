#include <bits/stdc++.h>
using namespace std;
// Kadane's ALgorithms -
// So, for decreasing this much complexity using Kadane's ALgotihms - Acc. ot this aalgorithm don;t addd to those elements which is negative , leave the sum zero, and incldue only possitive numbers sum

int main()
{

    int n;
    cout << "vector size - ";
    cin >> n;

    vector<int> arr(n);
    cout << "What are the vector elements - " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // For max sum array using Kadane's algorthms -
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ans = max(ans, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "hence the maximum sum can be print as - " << ans << endl;
}