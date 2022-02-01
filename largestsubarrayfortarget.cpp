// Input : arr[] = { 10, 5, 2, 7, 1, 9 },
//             k = 15
// Output : 4
// The sub-array is {5, 2, 7, 1}

#include <bits/stdc++.h>
using namespace std;

int findSarray(vector<int> &nums, int target)
{
    int sum = 0;
    int n = nums.size();
    unordered_map<int, int> umap;
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (sum == target)
        {
            maxlen = i + 1;
        }
        if (umap.find(sum) == umap.end())
        {
            umap[sum] = i;
        }
        if (umap.find(sum - target) != umap.end())
        {
            if (maxlen < (i - umap[sum - target]))
            {
                maxlen = i - umap[sum - target];
            }
        }
    }
    return maxlen;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};

    cout << findSarray(nums, 15);
}
