// largest subarray with equal number of 0s and 1s

#include <bits/stdc++.h>
using namespace std;

void findSubarray(vector<int> &nums)
{
    int end = -1;
    int maxlen = 0;
    int sum = 0;
    int n = nums.size();
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        nums[i] = (nums[i] == 0) ? -1 : 1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (sum == 0)
        {
            end = i;
            maxlen = i + 1;
        }

        if (umap.find(sum) != umap.end())
        {
            if (maxlen < i - umap[sum])
            {
                maxlen = i - umap[sum];
                end = i;
            }
        }
        else
        {
            umap[sum] = i;
        }
    }
    cout << end - maxlen + 1 << " " << end;
}

int main()
{
    vector<int> nums = {1, 0, 0, 1, 0, 1, 1};
    findSubarray(nums);
}